from cfgblock import CFGBlock
from decorators.concrete_node_decorators import *
from decorators.enumeration import type_stmt
from customvector import CustomVector
from graph import GraphBuilder


class CFGBuilder:

	def __init__(self):
		self._succ = None
		self._block = None
		self._badCFG = False
		self._cfg = CFG()
		self._sv = CustomVector()
		# For stmt
		self._breakJumpTarget = BlockScopePosPair()
		self._continueJumpTarget = None
		self._saveBreak = CustomVector()
		self._saveBlock = CustomVector()
		self._saveSucc = CustomVector()
		self._saveContinue = CustomVector()
		# switch stmt
		self._defaultCaseBlock = None
		self._switchTerminatedBlock = None
		self._switchExclusivelyCovered = None
		self._switchCond = None
		# labels
		self._labels = {}
		self._backPatchBlocks = CustomVector()
		self._addressTakenLabels = CustomVector()

		# for graph
		self.graph = GraphBuilder()
		self.curNode = -1



	def addPrefix(self, ch):
		self.graph.prefixString.append(ch)

	def removePrefix(self):
		self.graph.prefixString = self.graph.prefixString[:-1]

	def buildCFG(self, Decl, statement=None):
		""" Constructs a CFG from an AST (a Stmt). The ownership of the
		returned CFG is transferred to the caller.
		Parameters
		----------
		statement : :obj:`statement`
			This is the AST, and can represent any arbitrary statement. For
			a single expression or a function body (compound statement).
		Returns
		-------
		:obj:`CFG`
			A cfg object.
		None
			If the CFG construction fails.
		"""
		self.graph.prefixString = []
		if not statement:
			return None

		# print self.graph
		# print self.curNode
		# Create an empty block that will serve as the exit block for the CFG.
		# Is the first block added to the CFG and registered as exit block

		self._succ = self.createBlock()
		# Exit block is empty (None) create the next blocks lazily
		self._block = None
		# Visit the statements and create the CFG
		B = self.accepts(statement)
		# if self._badCFG:
		# 	return None
		# if B:
		# 	self._succ = B
		# backpatch the gotos whose label -> block mappings we didn't know when we
		# encountered them
		for e in self._backPatchBlocks.begin():
			b = e.block
			g = b.getTerminator()
			try:
				li = self._labels[g.getLabel()]
			except KeyError:
				continue

			self.addSucessor(b, li.block)

		# Add successor to the Indirect Goto Dispatch block (if we have one)
		b = self._cfg.getIndirectGotoBlock()
		if (b is not None):
			for l in self._addressTakenLabels.begin():
				# Look the target block
				try:
					li = self._labels[l]
				except KeyError:
					# If there is no target block that contains label, then we are looking
					# at an incomplete AST. Handle this by not registering a successor
					continue

				self.addSucessor(b, li.block)

		self._cfg.setEntry(self.createBlock())
		self.graph.printGraph()
		return self._cfg

	def createBlock(self, add_sucessor=True):
		"""Used to lazily create blocks that are connected to the current
		(global) succesor.
		Parameters
		----------
		add_sucessor : bool
			Variable that indicates whether or not a sucessor is added.
		Returns
		-------
		:obj:`CFGBlock`
			Returns the CFG block object.
		"""
		B = self._cfg.createBlock()
		if add_sucessor and self._succ:
			self.addSucessor(B, self._succ)
		return B

	def addSucessor(self, B, S, IsReachable=True):
		B.addSuccessor(CFGBlock.AdjacentBlock(S, IsReachable))

	def accepts(self, S):
		if not S:
			return
		return self.visit(S)

	def visit(self, S=None):
		"""Visit - Walk the subtree of a statement and add extra
		blocks for ternary operators, &&, and ||.  We also process "," and
		DeclStmts (which may contain nested control-flow).
		Paramaters
		----------
		S :
			Cursor to the statement in the AST.
		Returns
		-------
		:obj:`CFGBlock`
			Returns the CFG block object.
		"""
		if not S:
			return None

		kind = S.kind()

		if (type_stmt.COMPOUND_STMT == kind):
			# self.graph.addNode(S)
			return self.visitCompoundStmt(S)

		elif (type_stmt.DECL_STMT == kind):
			return self.visitDeclStmt(S)

		elif (type_stmt.IF_STMT == kind):
			return self.visitIfStmt(S)

		elif (type_stmt.BINARY_OPERATOR == kind):
			return self.visitBinaryOperator(S)

		elif (type_stmt.COMPOUND_ASSIGMENT_OP == kind):
			return self.visitCompoundAssignmentOp(S)

		elif (type_stmt.FOR_STMT == kind):
			return self.visitForStmt(S)

		elif (type_stmt.NULL_STMT == kind):
			return self.visitNullStmt()

		elif (type_stmt.WHILE_STMT == kind):
			return self.visitWhileStmt(S)

		elif (type_stmt.IMPL_CAST_EXPR == kind):
			return self.visitImplicitCastExpr(S)

		elif (type_stmt.CSTYLE_CAST_EXPR == kind):
			return self.visitCstyleCastExpr(S)

		elif (type_stmt.SWITCH_STMT == kind):
			return self.visitSwitchStmt(S)

		elif (type_stmt.CASE_STMT == kind):
			return self.visitCaseStmt(S)

		elif (type_stmt.BREAK_STMT == kind):
			return self.visitBreakStmt(S)

		elif (type_stmt.DEFAULT_STMT == kind):
			return self.visitDefaultStmt(S)

		elif (type_stmt.ADDR_LABEL_EXPR == kind):
			return self.visitAddrLabelExpr(S)

		elif (type_stmt.CALL_EXPR == kind):
			return self.visitCallExpr(S)

		elif (type_stmt.DO_STMT == kind):
			return self.visitDoStmt(S)

		elif (type_stmt.CONTINUE_STMT == kind):
			return self.visitContinueStmt(S)

		elif (type_stmt.GOTO_STMT == kind):
			return self.visitGoToStmt(S)

		elif (type_stmt.LABEL_STMT == kind):
			return self.visitLabelStmt(S)

		elif (type_stmt.CONDITIONAL_OPERATOR == kind or type_stmt.BINARY_CONDITIONAL_OPERATOR == kind):
			return self.visitConditionalOperator(S)

		elif (type_stmt.RETURN_STMT == kind):
			return self.visitReturnStmt(S)

		elif (type_stmt.PAREN_EXPR == kind):
			return self.visitParenExpr(S)

		elif (type_stmt.MEMBER_REF_EXPR == kind):
			return self.visitMemberRefExpr(S)

		elif (type_stmt.INDIRECT_GOTO_STMT == kind):
			return self.visitIndirectGoToStmt(S)

		elif (type_stmt.STMT_EXPR == kind):
			return self.visitStmtExpr(S)

		elif (type_stmt.COMPOUND_LITERAL_EXPR == kind):
			return self.visitCompoundLiteralExpr(S)

		elif (type_stmt.UNARY_OPERATOR == kind):
			self.visitUnaryStmt(S)

		elif (type_stmt.DECL_REF_EXPR == kind):
			# print S.printer()
			self.graph.addVariables(self.curNode, S.value())

		elif (type_stmt.INTEGER_LITERAL == kind):
			self.graph.addConstant(self.curNode, S.value())


		elif (type_stmt.CHARACTER_LITERAL == kind):
			self.graph.addConstant(self.curNode, S.value())

		elif (type_stmt.FLOATING_LITERAL == kind):
			self.graph.addConstant(self.curNode, S.value())

		elif (type_stmt.STRING_LITERAL == kind):
			self.graph.addConstant(self.curNode, S.value())

		elif (type_stmt.VAR_DECL == kind):
			for v in S.value():
				print v
				self.graph.addVariables(self.curNode, v)


		# elif (type_stmt.BLOCK_EXPR == kind):
		#   return self.visitBlockExpr(S)

		# elif (type_stmt.LAMBDA_EXPR == kind):
		#   return self.visitLambdaExpr(S)

		else:
			return self.visitStmt(S)

	def visitCompoundLiteralExpr(self, S):
		# self.autoCreateBlock()
		# self.appendStmt(self._block, S)

		se = S.getSubExpr()
		if (se is not None):
			return self.accepts(se)

	def visitStmtExpr(self, S):
		""" Utility method to handle (nested) statements expressions (a GCC extension)
		:param S: Statement
		:return: visit
		"""
		# self.autoCreateBlock()
		# self.appendStmt(self._block, S)

		return self.visitCompoundStmt(S.getSubStmt())

	def visitIndirectGoToStmt(self, I):
		# Lazily create the indirect-goto dispatch block if there isn't one already
		IBlock = self._cfg.getIndirectGotoBlock()

		if (IBlock is None):
			IBlock = self.createBlock(False)
			self._cfg.setIndirectGotoBlock(IBlock)

		# IndirectGoto is a control-flow statement. Thus we stop processing the current
		# block and create a new one
		if (self._badCFG):
			return None

		self._block = self.createBlock(False)
		self._block.setTerminator(I)
		self.addSucessor(self._block, IBlock)

		return self.accepts(I.getTarget())

	def visitMemberRefExpr(self, M):
		# self.autoCreateBlock()
		# self.appendStmt(self._block, M)
		return self.visit(M.getBase())

	def visitParenExpr(self, P):
		# self.autoCreateBlock()
		# self.appendStmt(self._block, P)

		return self.visit(P.getSubExpr())

	def visitReturnStmt(self, R):
		"""If we were in the middle of a block we stop processing that block.
		Notes
		-----
		If a 'return' appears in the middle of a block, this means that the
		code afterwards is DEAD (unreachable). We still keep a basic block for that code;
		a simple 'mark-and-sweep' from the entry block will be able to resport such dead blocks.
		"""
		# Create the new block
		self.graph.addFeature(self.curNode, 'return')
		# Add the return statement to the block. This may create a new blocks if R contains
		# control-flow (shor-circuit operations)
		return self.visitStmt(R)

	def visitNoRecurse(self, E):
		# self.autoCreateBlock()
		# self.appendStmt(self._block, E)
		return None

	# def visitBlockExpr(self, E):
	#   lastBlock = self.visitNoRecurse(E)

	def visitConditionalOperator(self, C):
		if (C.kind() == type_stmt.BINARY_CONDITIONAL_OPERATOR):
			opaqueValue = C.getOpaqueValue()
		else:
			opaqueValue = None


		trueExpr = C.getTrueExpr()
		falseExpr = C.getFalseExpr()
		cond = C.getCond()

		self.accepts(opaqueValue)
		self.accepts(cond)
		self.accepts(trueExpr)
		self.accepts(falseExpr)


	def visitLabelStmt(self, L):
		# Get the block of the labeled statement. Add it to our map (self._labels)
		self.accepts(L.getSubStmt())
		labelBlock = self._block

		if not labelBlock:
			labelBlock = self.createBlock()  # This can happen when the body is empty

		self._labels[L.value()] = BlockScopePosPair(labelBlock)
		# labels partition blocks, so this is the end of the basic block we were
		# processing (L is the blocks label). Because this is label (and we have
		# already processed the substatement) there is no extra control-flow to worry
		# about
		labelBlock.setLabel(L)
		if self._badCFG:
			return None
		# We set Block to NULL to allow lazy creation of a new block (if necessary);
		self._block = None
		# This block is now the implicit successor of other blocks
		self._succ = labelBlock
		return labelBlock

	def visitGoToStmt(self, G):
		"""Goto is a control-flow statement. Thus we stop processing the current block and
		create a new one."""
		if self._badCFG:
			return None
		self._block = self.createBlock(False)
		self._block.setTerminator(G)
		# If we already know the mapping to the label block add the sucessor now
		try:
			b = self._labels[G.getLabel()]
		except KeyError:
			b = None
		if not b:
			# We will need to backpatch this block later.
			self._backPatchBlocks.push_back(BlockScopePosPair(self._block))
		else:
			self.addSucessor(self._block, b.block)
		return self._block

	def visitContinueStmt(self, C):
		""""continue" is a control-flow statement. Thus we stop processing the current block."""

		self.graph.addFeature(self.curNode, 'continue')

	def visitDoStmt(self, D):

		loopSuccessor = None
		# "do ... while" is a control-flow statement. Thus we stop processing the current
		# block
		prevNode = self.graph.lastNode

		cond = D.getCond()
		body = D.getBody()

		self.accepts(cond)
		self.accepts(body)

	# TODO: REVISAR Y MEJORAR
	def visitCallExpr(self, C):
		"""Compute de callee type.
		TODO
		----
		calleType = C.getCalle().getType() #TODO TODO
		If this is a call to a no-return function, this stops the block here bool
		"""
		params = C.getParams()
		callee = C.getCallee()
		for param in params:
			self.accepts(param)

		return self.accepts(C.getCallee())

	def visitAddrLabelExpr(self, A):
		# self._addressTakenLabels.push_back(A.getLabel())
		# self.autoCreateBlock()
		# self.appendStmt(self._block, A)
		return self._block

	def visitStmt(self, S):
		# self.autoCreateBlock()
		# self.appendStmt(self._block, S)
		# I don't want the index of the array subscript in the CFG
		# if(S.kind() == type_stmt.ARRAY_SUBSCRIPT_EXPR):
		# return self.accepts(S.getSubExpr())
		return self.visitChildren(S)

	def visitChildren(self, S):
		B = self._block
		# Visit the children in their reverse order so that they appear in left-to-right (natural)
		# order in the CFG
		childrens = S.get_children()
		it = childrens.begin()
		for c in it:
			# if(self.isStmt(c)):
			R = self.visit(c)
		# if R:
		# 	B = R
		return B

	def visitCstyleCastExpr(self, S):
		# self.autoCreateBlock()
		# self.appendStmt(self._block, S)
		if (S.getSubExpr() and hasattr(S.getSubExpr(), 'value') ):
			self.graph.addVariables(self.curNode, S.getSubExpr().value())
		return self.accepts(S.getSubExpr())

	def visitImplicitCastExpr(self, S):
		# self.autoCreateBlock()
		# self.appendStmt(self._block, S)
		# print S.getSubExpr().kind()
		return self.accepts(S.getSubExpr())

	def isStmt(self, S):
		type = S.kind()
		if (type == type_stmt.COMPOUND_STMT or type == type_stmt.IF_STMT or type == type_stmt.FOR_STMT
				or type == type_stmt.DECL_STMT):
			return True
		else:
			return False

	def visitCompoundStmt(self, compoundStatement):
		"""visitCompoundStmt - when a compound statement is reached visit the stmts
		inside it.
		:param S: StmtDecorator
		:return: CFGBlock
		"""
		# creating a binding to block object
		lastBlock = self._block
		# iterating through the compound statement
		elements = compoundStatement.child_iterator()
		for e in elements:
			# lastNode = self.graph.lastNode

			curNode = self.graph.createNode('data2')
			self.curNode = curNode
			if (len(e.printer()) < 40):
				self.graph.addString(self.curNode, e.printer())
			newBlock = self.accepts(e)
		# if newBlock:
		# 	lastBlock = newBlock
		# if self._badCFG:
		# 	return None
		return lastBlock

	def visitDeclStmt(self, DS):
		# TODO: check if the declaration is label, if so elude it (return block)
		# If the DS refers to a single declaration

		if DS.isSingleDeclaration():
			self.visitDeclSubExpr(DS)
			return

		elements = DS.child_iterator()
		for e in elements:
			newStmt = SyntheticDeclStmt(DS.get_cursor(), e)
			B = self.visitDeclSubExpr(newStmt)

	def visitDeclSubExpr(self, DS):
		"""Utility method to add block-level expressions for DeclStmts
		and initializers in them
		:param DS: StmtDecorator
		:return:
		"""

		assert DS.isSingleDeclaration(), "Can handle single declarations only"

		VD = DS.getSingleDeclaration()
		# print VD.kind()

		init = None
		# print VD.printer()
		# if not VD:
		# 	init = VD.getInit()

		# self.accepts(DS)
		if (VD  is None): return
		childs = VD.get_children().begin()
		val = VD.value()
		if (len(val) > 1):
			self.graph.addVariables(self.curNode, val[0])
		for child in childs:
			print child
			self.accepts(child)

	def visitIfStmt(self, if_stmt):
		""" We may see an if stmt in the middle of a basic block, or it may be the
		first statement we are processing. In either case, we create a new basic block.
		First, we create the blocks for the then...else statements, and then we create the
		block containing the if stmt. If we were in the middle of a block, we stop processing
		that block. That block is then the implicit successor for the then and else clauses.
		"""
		# The block we were processing is now finished. Make it the successor block

		ifNode = self.curNode
		# print if_stmt.printer()
		self.graph.addFeature(ifNode, "icn")

		cond = if_stmt.getCond()
		then = if_stmt.getThen()
		elseBody = if_stmt.getElse()

		self.graph.addString(ifNode, cond.printer()[:40])
		self.accepts(cond)

		self.addPrefix('if')
		self.accepts(then)
		self.removePrefix()

		self.accepts(elseBody)

	def visitLogicalOperator(self, bOperator, stmt=None, trueBlock=None, falseBlock=None):
		# Introspect the RHS. if it is a nested logical operation, we recursively build te
		# CFG using this funcrion. Otherwise, resort to default CFG construction behaviour
		# print bOperator.value()
		# self.graph.addOperator(self.curNode, bOperator.value())
		rhs = bOperator.getRHS()
		self.accepts(rhs)
		lhs = bOperator.getLHS()
		self.accepts(lhs)

	# def tryEvaluateBool(self, S):
	# 	""" Try and evaluate the Stmt and return 0 or 1 if we can evaluate to know value
	# 	otherwise return -1.
	# 	"""
	# 	# TODO: Build options
	# 	if S.kind() is type_stmt.BINARY_OPERATOR:
	# 		bop = S
	# 		if bop.isLogicalOp():
	# 			# Todo: comprobar si esta en cache
	# 			result = self.evaluateAsBooleanCondition(S)  # TODO
	# 			# Todo: guardar en cache
	# 			return result
	# 		else:
	# 			# For 'x & 0' and 'x * 0' we can determine that the value is
	# 			# always false
	# 			if(bop.value() == '*' or bop.value() == '&'):
	# 				# If either operand is 0 value must be false
	# 				if(bop.getLHS.kind() == type_stmt.INTEGER_LITERAL and bop.getLHS.value() == 0):
	# 					return TryResult(False)
	# 				if(bop.getHS.kind() == type_stmt.INTEGER_LITERAL and bop.getRHS.value() == 0):
	# 					return TryResult(False)
	# 	return self.evaluateAsBooleanCondition(S)
	#
	# def evaluateAsBooleanCondition(self, expression):
	# 	if expression.kind() is type_stmt.BINARY_OPERATOR:
	# 		bop = expression
	# 		if bop.isLogicalOp():
	# 			lhs = self.tryEvaluateBool(bop.getLHS())
	# 			if lhs.isKnown():
	# 				# We were able to evaluate the LHS, see if we can get away with not
	# 				# evaluating the RHS: '0 && X' => 0, '1 || X' => 1
	# 				if lhs.isTrue() and bop.value() == '||':
	# 					return lhs.isTrue()
	# 				rhs = self.tryEvaluateBool(bop.getRHS())
	# 				if rhs.isKnown():
	# 					if bop.value() == '||':
	# 						return lhs.isTrue() or rhs.isTrue()
	# 					else:
	# 						return lhs.isTrue() and rhs.isTrue()
	# 			else:
	# 				rhs = self.tryEvaluateBool(bop.getRHS())
	# 				if rhs.isKnown():
	# 					# We can't evaluate the LHS; however, sometimes the result
	# 					# is determined by RHS: 'X && 0' => 0, 'X || 1' => 1
	# 					if rhs.isTrue() and bop.value() == '||':
	# 						return rhs.isTrue()
	# 					else:
	# 						# bopRes = self.checkIncorrectLogicOperator(bop) # TODO: HACERLA
	# 						# if(bopRes.isKnown()):
	# 						return TryResult()  # bopRes.isTrue() FIXME
	# 			return TryResult()
	# 		elif bop.value() == '==' or bop.value() == '!=':
	# 			#bopRes = self.checkIncorrectEqualityOperator(bop)
	# 			# if (bopRes.isKnown()):
	# 			return TryResult()  # bopRes.isTrue() FIXME
	# 		elif bop.value() == '<' or bop.value() == '>' or bop.value() == '>=' or bop.value() == '<=':
	# 			#bopRes = self.checkIncorrectRelationaloperator(bop)
	# 			# if(bopRes.isKnown()):
	# 			# bopRes.isTrue() #FIXME: De momento lo todomo todo como uknown, hay que hacerla bien
	# 			return TryResult()
	# 	# result = None
	# 	# if(expression.EvaluateAsBooleanCondition(result) == True): # TODO(Optional)
	# 	  #  return result
	# 	return TryResult()

	def visitBinaryOperator(self, B):
		# && or ||

		self.graph.addString(self.curNode, B.printer())
		if (B.value() is not None):
			self.graph.addOperator(self.curNode, B.value())
		# print B.value()

		if B.isLogicalOp():
			return self.visitLogicalOperator(B)
		if B.value() == ',':
			# self.autoCreateBlock()
			# self.appendStmt(self._block, B)
			self.accepts(B.getRHS())
			return self.accepts(B.getLHS())
		if B.isAssignmentOp():
			# self.autoCreateBlock()
			# self.appendStmt(self._block, B)
			self.graph.inLHS = True
			self.accepts(B.getLHS())
			self.graph.inLHS = False

			return self.accepts(B.getRHS())
		# TODO: ALWAYS ADD
		# self.autoCreateBlock()
		# self.appendStmt(self._block, B)
		# print B.getLHS().getSubExpr().value()

		numOfOps = B.getLen()
		if (numOfOps > 1):
			oldNode = self.curNode

			rhNode = self.graph.createNode('graph')
			self.curNode = rhNode
			rBlock = self.accepts(B.getRHS())

			lhNode = self.graph.createNode('data2')
			self.curNode = lhNode
			lBlock = self.accepts(B.getLHS())

			self.graph.addLink(oldNode, rhNode)
			self.graph.addLink(oldNode, lhNode)
		else:
			rBlock = self.accepts(B.getRHS())
			lBlock = self.accepts(B.getLHS())

	def visitCompoundAssignmentOp(self, C):
		# TODO: ALWAYS ADD
		# self.autoCreateBlock()
		# self.appendStmt(self._block, C)
		self.graph.addOperator(self.curNode, C.specific_kind())
		rBlock = self.accepts(C.getRHS())
		lBlock = self.accepts(C.getLHS())
		# If visiting RHS causes us to finish 'Block' eg: the RHS is a StmtExpr
		# containing a DoStmt, and the LHS doesn't create a new block, the we should
		# return RBlock. Otherwise we'll incorrectly recur Null
		if lBlock:
			return lBlock
		else:
			return rBlock

	def visitForStmt(self, F):
		# 'For' is a control flow statement, thus we stop processing the current block
		#
		i = F.getInit()
		# print i.printer()
		cond = F.getCond()
		body = F.getBody()
		inc = F.getInc()

		# self.accepts(i)
		# self.graph.createNode('data2', 'cn')
		# self.accepts(cond)
		# self.addPrefix('lp')
		# self.accepts(body)
		# self.accepts(inc)
		# self.removePrefix()

		# if i:
		# 	self._block = self.createBlock()
		# 	initBlock =  self.accepts(i)

		condNode = self.graph.createNode('data2')

		self.graph.addFeature(condNode, 'cn')
		self.accepts(i)
		self.accepts(cond)

		self.addPrefix('lp')
		IncNode = self.graph.createNode('data2')
		self.curNode = IncNode
		self.accepts(inc)
		self.accepts(body)
		self.removePrefix()
		return None

	def visitNullStmt(self):
		return None

	def visitWhileStmt(self, W):

		whileCnNode = self.curNode
		cond = W.getCond()
		body = W.getBody()
		self.graph.addFeature(whileCnNode, 'cn')
		self.graph.addFeature(whileCnNode, 'loop')
		self.accepts(cond)
		self.addPrefix('lp')
		self.accepts(body)
		self.removePrefix()

		return None

	# switchFlag = 0

	def visitSwitchStmt(self, terminator):
		# 'Switch' is a control-flow statment. Thus we stop processing the current block

		tmBody = terminator.getBody()
		tmCond = terminator.getCond()

		self.graph.addFeature(self.curNode, 'switch')
		self.accepts(tmCond)

		self.addPrefix('sb')
		self.accepts(tmBody)
		self.removePrefix()

	# def tryEvaluate(self, S):
	# 	return self.evaluateAsRValue(S)
	#
	# def evaluateAsRValue(self, expr):
	# 	field = self.fastEvaluateAsRValue(expr)[1]
	# 	isConst = field is not False
	# 	if isConst:
	# 		return self.fastEvaluateAsRValue(expr)
	# 	return[False, False]
	#
	# def fastEvaluateAsRValue(self, expr):
	# 	# Fast evaluation of integer literals, since we sometimes see files
	# 	# containing vast quantities of these
	# 	if expr.kind() is type_stmt.INTEGER_LITERAL:
	# 		return [True, expr.value()]
	# 	# This case should be rare
	# 	if expr.kind() is type_stmt.NULL_STMT:
	# 		return [True, False]
	# 	# TODO: FOR ARRAY TYPES
	# 	return[False, False]
	#
	# # caseExit = 0

	def visitCaseStmt(self, CS):
		# CaseStmts are essentially labels, so they are the first statement in a block

		sub = CS.getSubStmt()
		val = CS.value()

		self.graph.addFeature(self.curNode, val)
		self.graph.addFeature(self.curNode, 'case')
		self.accepts(sub)

	def visitUnaryStmt(self, S):
		self.graph.addOperator(self.curNode, S.value())
		self.visit(S.getOperand())

	# def shouldAddCase(self, switchExclusivelyCovered, switchCond, CS):
	# 	if not switchCond:
	# 		return True
	# 	addCase = False
	# 	if not switchExclusivelyCovered:
	# 		if type(switchCond) is int:
	# 			# Evaluate the LHS of the case value
	# 			lhsInt = self.evaluateAsRValue(CS.getLHS())  # TODO
	# 			condInt = switchCond
	# 			if condInt == lhsInt:
	# 				addCase = True
	# 				self._switchExclusivelyCovered = True
	# 			elif condInt > lhsInt:
	# 				rhs = CS.getRHS()
	# 				if rhs:
	# 					# Evaluate the RHS of the case value
	# 					v2 = self.evaluateKnownConstInt(rhs)
	# 					if v2 >= condInt:
	# 						addCase = True
	# 						self._switchExclusivelyCovered = True
	# 		else:
	# 			addCase = True
	# 	return addCase

	def evaluateKnownConstInt(self, S):
		""" Call EvaluateAsRValue and return the folded integer. This must be called on an expression
		that constant folds to an integer
		"""
		result = self.evaluateAsRValue(S)
		if result[0]:
			return result[1]

	def visitBreakStmt(self, B):
		# Break is a control-flow stmt. Thus we stop processsing the current block

		self.graph.addFeature(self.curNode, 'break')

	# Now create a new block that ends with the break stmt

	# return self._block

	def visitDefaultStmt(self, terminator):
		substmt = terminator.getSubStmt()

	def appendStmt(self, CFGBlock, stmt):
		"""Interface to CFGBlock - adding CFGElements."""
		CFGBlock.appendStmt(stmt)


class CFG:
	def __init__(self):
		self._entry = None
		self._exit = None
		self._blocks = CustomVector()
		self._numBlockID = -1
		self._indirectGotoBlock = None  # special block to contain collective
		# dispatch for indirect gotos
		self._syntheticDeclStmts = []

	def createBlock(self):
		"""Creates a new block in the CFG. The CFG owns the block.
		Returns
		-------
		:obj: `CFGBlock`
		"""
		first_block = False
		if not (self.front) and not (self.back):
			first_block = True
		# Create a new block
		self._numBlockID += 1
		# Instantiate the elements of the block
		elements = CustomVector()
		B = CFGBlock(self._numBlockID, elements, self)
		# Insert the block
		self._blocks.push_back(B)
		if (first_block):
			self._entry = self._exit = B
		return self._blocks.back()

	def buildCFG(self, declaration, statement):
		""" Builds a CFG from an AST
		:param declaration: DeclDecorator
		:param statement: StmtDecorator
		:return: CFG
		"""
		builder = CFGBuilder()
		return builder.buildCFG(declaration, statement)

	def setEntry(self, block):
		""" Set the entry block of the CFG. This is typically used
		only during the CFG construction.
		:param block: CFGBlock
		:return: None
		"""
		self._entry = block

	def setIndirectGotoBlock(self, block):
		""" Set the block used for indirect goto jumps.
		This is typically used only during CFG construction.
		:param block: CFGBlock
		:return: block
		"""
		self._indirectGotoBlock = block

	#
	# Block Iterators
	#

	@property
	def front(self):
		return self._blocks.front()

	@property
	def back(self):
		return self._blocks.back()

	def begin(self):
		return self._blocks.begin()

	def rbegin(self):
		return self._blocks.rbegin()

	def getEntry(self):
		return self._entry

	def getExit(self):
		return self._exit

	def getIndirectGotoBlock(self):
		return self._indirectGotoBlock

	def addSyntheticDeclStmt(self, synthetic, source):
		""" Records a synthetic DeclStmt and the DeclStmt it was constructed from.
		The CFG uses synthetic DeclStmt when a single AST DeclStmt contains multiple decls
		:return:
		"""
		assert synthetic.isSingleDeclaration(), "Can handle single declaration only"

		self._syntheticDeclStmts.append([source, synthetic])

	def synthetic_stmt_begin(self):
		""" Iterates over synthetic DeclStmts in the CFG
		Each element is a [synthetic statement, source statement] pair
		:return: [synthetic statement, source statement]
		"""
		for key, value in self._syntheticDeclStmts.iteritems():
			yield [key, value]

	#
	# CFG Introspection
	#

	def getNumBlocIDs(self):
		""" Returns the total number of BlockIDs allocated (start at 1)
		:return: int
		"""
		return self._numBlockID

	def size(self):
		""" Returns the total number of CFGBlocks within the CFG
		:return: int
		"""
		return self._numBlockID

	def printer(self):
		output = ""
		for b in self._blocks.begin():
			output += b.printer()
		output += '=>Entry: ' + str(self._entry.getBlockID()) + '\n'
		output += '<=Exit: ' + str(self._exit.getBlockID()) + '\n'

		return output


class TryResult:

	def __init__(self, boolean=None):
		if boolean is None:
			self._x = -1
		else:
			if boolean:
				self._x = 1
			elif not boolean:
				self._x = 0

	def isTrue(self):
		return self._x == 1

	def isFalse(self):
		return self._x == 0

	def isKnown(self):
		return self._x >= 0


class AddStmtChoice:
	NotAlwaysAdd = 0
	AlwaysAdd = 1

	def __init__(self, a_kind, ):
		self._kind = a_kind

	def alwaysAdd(self, builder, stmt):
		return builder.alwaysAdd(stmt) or self._kind == self.AlwaysAdd


class BlockScopePosPair:
	def __init__(self, block=None, scope=None):
		self.block = block
		self.scope = scope
