from GetGraphs import GetGraphs
from myMiniModel import MyMiniModel

x = GetGraphs(20)
data = x.graphs()

trainData = data[:10]
test = x.getTestGraph()
matrix =[]

for train in trainData:
	model = MyMiniModel(0.6)
	# model.fit(train)
	mat = model.fit(train)
	# for m in mat:
	# 	print(m[0], m[1])
	# print(len(mat))
	# print("*******************")
	testRes = model.transform(test)
	simMat = []
	for n in testRes:
		simMat.append(n[1])
		# print (n[0]['string'], n[0]['features'], "\n--->", n[1])
	matrix.append(simMat)

print(matrix)

# print (test)
# train =[]
# for t in data:
# 	# print(t[0])
# 	train.append([t[0], t[1], t[0], t[1]])

# allLabels = []
# x = train
# mixer = MixFeatures()
# for i in range(4):
# 	x = mixer.getMixed(x)
# 	# for t in x: print (t[0])

# 	t = FilterFeatures(x)
# 	x = t.getFiltered()

# 	for g in x:
# 		allLabels.append(g[1])
# 	# print (i)
# 	# print(x)

# print(allLabels)
