from getGraphs import GetGraphs
from myMiniModel import MyMiniModel
import os
import csv

finalVector = []
questionList = os.listdir("data2")
print(questionList)
for i in range(1, len(questionList)):
    print(questionList[i])
    dirList = os.listdir("data2/" + questionList[i])  # dir is your directory path
    x = GetGraphs(len(dirList) - 1)
    trainData = x.graphs(questionList[i], dirList)
    # trainData = data2[:10]
    dirList = os.listdir("data2/" + questionList[i] + "/goodset")
    print(dirList)
    for train in trainData:
        model = MyMiniModel(0.6)
        # model.fit(train)
        mat = model.fit(train)
        maxm = -1
        for filename in dirList:
            test = x.getTestGraph(questionList[i], filename)
            testRes = model.transform(test)
            simMat = []
            for n in testRes:
                simMat.append(n[1])
            simMat.sort()
            # find avg of min 25 values
            # length = len(simMat)/3
            avg = sum(simMat[:25]) / 25
            if avg > maxm:
                maxm = avg
        finalVector.append(maxm)

rows = []
with open('dataset/worksheet.csv', 'rb') as f:
    reader = csv.reader(f)
    for row in reader:
        rows.append(row)

print(rows[1])
j = 0
for i in range(1, len(rows)):
    if rows[i][2] != 'accepted':
        rows[i].append(finalVector[j])
        j += 1
    else:
        rows[i].append(1)

with open('dataset/worksheet.csv', 'wb') as f:
    writer = csv.writer(f)
    writer.writerows(rows)

# x = GetGraphs(20)
# data2 = x.graphs()
#
# trainData = data2[:10]
# test = x.getTestGraph()
# matrix = []
# workbook = openpyxl.Workbook('feat.xlsx')
# worksheet = workbook.active()
# row = 0
# col = 0
#
# for train in trainData:
#     model = MyMiniModel(0.6)
#     # model.fit(train)
#     mat = model.fit(train)
#     # for m in mat:
#     # 	print(m[0], m[1])
#     # print(len(mat))
#     # print("*******************")
#     testRes = model.transform(test)
#     simMat = []
#     for n in testRes:
#         simMat.append(n[1])
#     # print (n[0]['string'], n[0]['features'], "\n--->", n[1])
#     simMat.sort(reverse=True)
#     # find avg of top 10 values
#     avg = sum(simMat[:10]) / 10
#     matrix.append(avg)
#
# print(matrix)


# print (test)
# train =[]
# for t in data2:
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
