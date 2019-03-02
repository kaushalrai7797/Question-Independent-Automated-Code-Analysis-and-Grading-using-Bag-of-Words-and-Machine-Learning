from decorators.enumeration import type_stmt
import json
import copy

class Node:
	def __init__(self, type, id, feature):
		self.features = []
		self.featuresSelf = []
		self.featuresDerived = []
		if feature:
			self.features.append(feature)
		self.type = type
		self.id = id
		self.ids = []
		self.operators = []
		self.constants = []
		self.variables = []
		self.lhsvars = []
		self.links = []
		self.string = None
		self.controlEdges = []
		self.dataEdges = []
		self.blockNode = {} # starting node of any block

	def isControlEdge(self):
		return self.type == "control"


class GraphBuilder:
	def __init__(self):
		self.Nodes = []
		self.numberOfNodes = 0
		self.lastNode = -1
		self.variableMap = {}
		self.visited = []
		self.inLHS = False
		self.prefixString = []

		self.basic = []
		self.expr = []
		self.exprDepend =[]
		self.controlContextBC =[]
		self.controlContextEC =[]
		self.controlContextED =[]
		self.varMap = {}

		self.inFea = ['scanf', 'cin', 'gets']
		self.outFea = ['printf', 'cout']

	def createNode(self, type, feature = None):
		newNode = Node(type, self.numberOfNodes, feature)
		self.numberOfNodes = self.numberOfNodes + 1

		self.Nodes.append(newNode)
		self.lastNode = self.numberOfNodes - 1

		for ps in self.prefixString:
			newNode.ids.append(ps)

		return self.numberOfNodes - 1

	# def addControlEdge(self, fromNode, toNode):
	#     self.Nodes[fromNode].controlEdges.append(toNode)

	def addFeature(self, node, feature):
		if feature not in self.Nodes[node].features:
			self.Nodes[node].featuresSelf.append(str(feature))

	def addBasic(self):
		for node in self.Nodes:
			controlContext = ''.join(node.ids)
			self.basic.extend(node.operators)
			for op in node.operators:
				self.controlContextBC.append(controlContext + ':' + op)
			for con in node.constants:
				self.controlContextBC.append(controlContext + ':' + con)
			self.basic.extend(node.constants)

			if 'cn' in node.featuresSelf:
				self.basic.append('loop')

			if 'switch' in node.featuresSelf:
				self.controlContextBC.append(controlContext + ':' + 'switch')

	def addExpr(self):
		for node in self.Nodes:
			expression = ''
			for op in node.operators:
				expression += str(len(node.variables)) + ';' + op + ';'
			for con in node.constants:
				expression += str(con)
			self.expr.append(expression)

			controlContext = ''.join(node.ids)
			self.controlContextEC.append(controlContext + ':' + expression)
			for var in node.lhsvars:
				if var in self.varMap:
					for ex in self.varMap[var]:
						exp = ex + '#' + expression
						self.exprDepend.append(exp)

			for var in node.variables:
				if var not in self.varMap:
					self.varMap[var] = [expression]
				else:
					self.varMap[var].append(expression)



	def addOperator(self, node, operator):
		if (operator == '='): return

		self.Nodes[node].operators.append(operator)

	def addConstant(self, node, cons):
		self.Nodes[node].constants.append(str(cons))

	def addString(self, node, string):
		self.Nodes[node].string = string

	def addLink(self, node1, node2):
		self.Nodes[node1].links.append(node2)

	def addVariables(self, node, var):
		if (var in self.inFea):
			self.addFeature(node, 'in')
			return
		if (var in self.outFea):
			self.addFeature(node, 'out')
			return
		loca = self.Nodes[node].variables
		if self.inLHS == True: loca = self.Nodes[node].lhsvars
		if var not in loca:
			loca.append(var)

	# def dfs(self, node, parent):
	#     if (self.visited[node.id] == True):
	#         return
	#     else:
	#         self.visited[node.id] = True
	#     for var in node.variables:
	#         if var in self.variableMap:
	#             size = len(self.variableMap[var])
	#             if (size > 0):
	#                 self.Nodes[self.variableMap[var][size-1]].dataEdges.append(node.id)
	#         else:
	#             self.variableMap[var] = []
	#         self.variableMap[var].append(node.id)
	#
	#     for nodeId in node.controlEdges:
	#         self.dfs(self.Nodes[nodeId],node)
	#     for var in node.variables:
	#         size = len(self.variableMap[var])
	#         self.variableMap[var].pop(size-1)


	def preProcess(self):
		for node in self.Nodes:
			if( len(node.operators)*len(node.constants) > 0):
				for oper in node.operators:
					for con in node.constants:
						node.featuresSelf.append(str(oper)+str(con))
			else:
				node.featuresSelf.extend(node.constants)
				node.featuresSelf.extend(node.operators)


			for var in node.variables:
				recentNode = None
				for n2 in self.Nodes:
					if (n2 == node): break
					if (var in n2.lhsvars or var in n2.variables): recentNode = n2

				if (recentNode is None): continue
				node.links.append(recentNode.id)





	# def copyNodes(self):
	#     for node in self.Nodes:
	#         for op in node.operators:
	#             nNode = copy.copy(node)
	#             nNode.ids.append(op)
	#             self.Nodes.append(node)


	def varFeatures(self):
		for node in self.Nodes:
			for var in node.variables:
				if (var not in self.variableMap): self.variableMap[var] = []
				node.featuresDerived.extend(self.variableMap[var])
				self.variableMap[var].extend(node.featuresSelf)



	def passFeatures(self):
		i = len(self.Nodes) - 1
		while (i > 0) :
			for link in self.Nodes[i].links:
				self.Nodes[i].featuresDerived.extend(self.Nodes[link].featuresSelf)



			i = i-1

	def passFeaturesRev(self):
		i = 0
		while (i < len(self.Nodes)) :
			for link in self.Nodes[i].links:
				self.Nodes[i].featuresDerived.extend(self.Nodes[link].featuresSelf)
			i = i+1

	def makeUnique(self):
		for node in self.Nodes:
			node.features = list(set(node.featuresSelf) | set(node.featuresDerived) )

	def printGraph(self):
		# self.dfs(self.Nodes[0], None)
		# self.preProcess()
		# self.passFeatures()
		# self.varFeatures()
		# self.makeUnique()
		# print "-----------------------------------"
		self.addBasic()
		self.addExpr()

		self.varMap = {}

		print self.basic
		print self.expr
		print self.exprDepend
		print self.controlContextBC
		print self.controlContextED
		print self.controlContextEC
		# for node in self.Nodes:
		#     self.printNode(node.id)


		jsonData = {}
		jsonData['nodes'] = []
		for node in self.Nodes:
			jsonData['nodes'].append({
				'nodeId': node.id,
				'features': node.features,
				'featuresSelf': node.featuresSelf,
				'variables': node.variables,
				'operators': node.operators,
				'links': node.links,
				'ids': node.ids,
				'constants': node.constants,
				'string': node.string
			})
		jsonData['features'] = []
		jsonData['features'].append({
			'basic': self.basic,
			'expr': self.expr,
			'exprDepend': self.exprDepend,
			'controlContextEC': self.controlContextEC,
			'controlContextBC': self.controlContextBC
		})
		with open("graph.json", "w") as file:
			json.dump(jsonData, file)

	def printNode(self, nodeId):
		# return
		node = self.Nodes[nodeId]
		print "[", node.id , "]"
		print "features :    ", node.features
		print "featuresShelf:", node.featuresSelf
		print "featuresDer:  ", node.featuresDerived
		print "variables:    ", node.variables
		print "controlEdges: ", node.controlEdges
		print "dataEdges:    ", node.dataEdges
		print "string        ", node.string
		print "links         ", node.links
		print "lhs variables ", node.lhsvars

	# def saveFeatureMatrix(self):
	#
	#     pass
