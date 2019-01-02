from decorators.enumeration import type_stmt
import json

class Node:
    def __init__(self, type, id):
        self.features = []
        self.type = type
        self.id = id
        self.controlEdges = []
        self.dataEdges = []
        self.blockNode = {} # starting node of any block
        self.variables = []
    def isControlEdge(self):
        return self.type == "control"


class GraphBuilder:
    def __init__(self):
        self.Nodes = []
        self.numberOfNodes = 0
        self.lastNode = -1
        self.variableMap = {}
        self.visited = []
    def createNode(self, type, feature = ""):
        newNode = Node(type, self.numberOfNodes)
        self.numberOfNodes = self.numberOfNodes + 1
        self.Nodes.append(newNode)
        self.lastNode = self.numberOfNodes - 1
        return self.numberOfNodes - 1

    def addControlEdge(self, fromNode, toNode):
        self.Nodes[fromNode].controlEdges.append(toNode)

    def addFeature(self, node, feature):
        if feature not in self.Nodes[node].features:
            self.Nodes[node].features.append(feature)

    def addVariables(self, node, var):
        if var not in self.Nodes[node].variables:
            self.Nodes[node].variables.append(var)
    def dfs(self, node, parent):
        if (self.visited[node.id] == True):
            return
        else:
            self.visited[node.id] = True
        for var in node.variables:
            if var in self.variableMap:
                size = len(self.variableMap[var])
                self.Nodes[self.variableMap[var][size-1]].dataEdges.append(node.id)
            else:
                self.variableMap[var] = []
            self.variableMap[var].append(node.id)

        for nodeId in node.controlEdges:
            self.dfs(self.Nodes[nodeId],node)
        for var in node.variables:
            size = len(self.variableMap[var])
            self.variableMap[var].pop(size-1)

    def printGraph(self):
        for node in self.Nodes: self.visited.append(False)
        self.dfs(self.Nodes[0], None)
        print "-----------------------------------"
        for node in self.Nodes:
            print "[",node.id , "]"
            print "features :    ", node.features
            print "variables:    ", node.variables
            print "controlEdges: ", node.controlEdges
            print "dataEdges:    ", node.dataEdges

        jsonData = {}
        jsonData['nodes'] = []
        for node in self.Nodes:
            jsonData['nodes'].append({
                'nodeId': node.id,
                'features': node.features,
                'controlEdges': node.controlEdges,
                'dataEdges': node.dataEdges
            })
        with open("graph.json", "w") as file:
            json.dump(jsonData, file)

    def printNode(self, nodeId):
        node = self.Nodes[nodeId]
        print "[", node.id , "]"
        print "features :    ", node.features
        print "variables:    ", node.variables
        print "controlEdges: ", node.controlEdges
        print "dataEdges:    ", node.dataEdges
