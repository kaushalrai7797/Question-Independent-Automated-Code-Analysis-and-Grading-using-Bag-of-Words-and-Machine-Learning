class NodeType:
    def __init__(self, node):
        self.featureWt = {}
        self.featuresSelf = node['featuresSelf']
        self.ids = node['ids']
        self.totalWt = 0.
        self.totalCt = 0
        self.addFeatures(node)

    def addFeatures(self, node):
        features = node['features']
        for feat in features:
            if feat in self.featureWt:
                self.featureWt[feat] += 1
                self.totalWt += 1
            else:
                self.featureWt[feat] = 1
                self.totalWt += 1
        self.totalCt += 1

    def jaccard_similarity(self, list1, list2):
        intersection = len(list(set(list1).intersection(list2)))
        # print(list(set(list1).intersection(list2
        union = (len(list1) + len(list2)) - intersection
        if union == 0:
            return 0.0
        return float(intersection / union)

    def compare2(self, node):
        list1 = self.featureWt.keys()
        list2 = node['features']
        return self.jaccard_similarity(list1, list2)

    def compare(self, node):
        # return self.compare2(node)
        features = node['features']
        featuresSelf = node['featuresSelf']
        # print (node)
        ids = node['ids']
        if (self.ids != ids or self.featuresSelf != node['featuresSelf']):
            return 0.0
        if self.totalWt == 0.:
            return 0.0
        ct = 0.0
        negWt = max(self.featureWt.values())
        for feat in featuresSelf:
            if feat not in self.featureWt:
                return 0.

        for feat in features:
            if feat in self.featureWt:
                ct += self.featureWt[feat]
            else:
                ct -= negWt
        return ct / self.totalWt


class MyMiniModel:
    def __init__(self, thres=0.7):
        self.Nodes = []
        self.thres = thres
        pass

    def _fitSelf(self, gp):
        modelLen = len(self.Nodes)
        # print(gp)
        for node in gp['nodes']:
            i = 0
            maxMt = 0.0
            mtIn = -1
            while (i < modelLen - 1):
                cm = self.Nodes[i].compare(node)

                if cm >= self.thres:
                    if cm > maxMt:
                        maxMt = cm
                        mtIn = i
                i += 1
            if mtIn == -1:
                self.Nodes.append(NodeType(node))
            else:
                self.Nodes[mtIn].addFeatures(node)

    def fit(self, gps):
        # print(gps)
        # for gp in gps:
        #     self._fitSelf(gp)
        self._fitSelf(gps)

        toRet = []
        for node in self.Nodes:
            if (node.totalCt > 0):
                toRet.append([node.featureWt, node.totalCt])
        return toRet

    def transform(self, gp):
        # print(gp)
        modelLen = len(self.Nodes)
        print("modelLen : ", modelLen)
        toRet = []
        for node in gp['nodes']:
            i = 0
            maxMt = 0.0
            mtIn = -1
            while (i < modelLen - 1):
                cm = self.Nodes[i].compare(node)

                if (cm > maxMt):
                    maxMt = cm
                    mtIn = i
                i += 1
            toRet.append([node, maxMt])
        return toRet
