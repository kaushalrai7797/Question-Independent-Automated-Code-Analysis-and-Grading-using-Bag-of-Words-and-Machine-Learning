import json


class GetGraphs:
    def __init__(self, number):
        self.num = number

# def formatGraph(self, gp):
# 	nodeLen = len(gp["nodes"])
# 	features = []
# 	for node in gp['nodes']:
# 		if len(node['features']) == 0: continue
# 		for i  in range(len(node['features'])):
# 			feat = node['features'][i]
# 			features.append(str(feat))
# 			node['features'][i] = len(features) - 1
#
# 	matLen = len(features)
# 	adjMat = [[0 for x in range(matLen)]  for y in range(matLen)]
# 	labelDict = {}
# 	i = -1
# 	for feat in features:
# 		i = i+1
# 		labelDict[i] = features[i]
# 	edges = []
# 	edgeLabels = {}
# 	for node in gp['nodes']:
# 		for feat in node['features']:
# 			for feat2 in node['features']:
# 				if (feat == feat2): continue
# 				adjMat[feat][feat2] = 1
# 				# adjMat[feat2][feat] = 1
# 				edges.append((feat, feat2))
# 				# edges.append((feat2,feat))
# 				edgeLabels[(feat, feat2)] = 1
# 				# edgeLabels[(feat2, feat)] = 2
#
#
# 		for var in node['variables']:
# 			node2 = None
# 			nodeLast = None
# 			for n2 in gp['nodes']:
# 				nodeLast = n2
# 				if n2 == node: break
# 				if (var in n2['variables']): node2 = n2
#
# 			if (node2 is None): continue
# 			for feat in node2['features']:
# 				for feat2 in node['features']:
# 					adjMat[feat][feat2] = 1
# 					# adjMat[feat2][feat] = 1
# 					edges.append((feat, feat2))
# 					# edges.append((feat2,feat))
# 					edgeLabels[(feat, feat2)] = 1
# 					# edgeLabels[(feat2, feat)] = 2
#
# 			if (nodeLast is None): continue
# 			for feat in nodeLast['features']:
# 				for feat2 in node['features']:
# 					adjMat[feat][feat2] = 1
# 					# adjMat[feat2][feat] = 1
# 					edges.append((feat, feat2))
# 					# edges.append((feat2,feat))
# 					edgeLabels[(feat, feat2)] = 1
# 					# edgeLabels[(feat2, feat)] = 2
#
#
#
#
# 	return [adjMat, labelDict, edgeLabels, edges]


    def graphs(self):
        graphs = []

        for i in range(self.num):
            gp = None
            with open("data/" + str(i) + ".json", "r") as file:
                gp = json.load(file)

            graphs.append(gp)

        return graphs


    def getTestGraph(self):
        gp = None
        with open("data/graph.json", "r") as file:
            gp = json.load(file)

        return gp
