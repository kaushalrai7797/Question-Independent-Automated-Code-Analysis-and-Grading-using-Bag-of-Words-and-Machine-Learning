from getGraphs import GetGraphs
import numpy
import os
import csv
from sklearn.feature_extraction.text import CountVectorizer

basicAll = []
controlContextECAll = []
exprAll = []
controlContextBCAll = []
exprDependAll = []

questionList = os.listdir("data")
print(questionList)
# for i in range(1, len(questionList)):
for i in range(len(questionList)):
    corpusB = []
    corpusBC = []
    corpusEC = []
    corpusED = []
    corpusE = []

    print(questionList[i])
    dirList = os.listdir("data/" + questionList[i])  # dir is your directory path
    x = GetGraphs(len(dirList) - 1)
    trainData = x.graphs(questionList[i], dirList)
    dirList = os.listdir("data/" + questionList[i] + "/goodset")
    print(dirList)
    for filename in dirList:
        test = x.getTestGraph(questionList[i], filename)
        corpusB.append(" ".join(test['features'][0]['basic']))
        corpusEC.append(" ".join(test['features'][0]['controlContextEC']))
        corpusED.append(" ".join(test['features'][0]['exprDepend']))
        corpusE.append(" ".join(test['features'][0]['expr']))
        corpusBC.append(" ".join(test['features'][0]['controlContextBC']))

    for train in trainData:
        corpusB.append(" ".join(train['features'][0]['basic']))
        corpusEC.append(" ".join(train['features'][0]['controlContextEC']))
        corpusED.append(" ".join(train['features'][0]['exprDepend']))
        corpusE.append(" ".join(train['features'][0]['expr']))
        corpusBC.append(" ".join(train['features'][0]['controlContextBC']))

    vectorizer = CountVectorizer(stop_words=[])

    # print(len(corpusB))
    # print(len(corpusE))
    # print(len(corpusED))
    # print(len(corpusBC))
    # print(len(corpusEC))

    # print corpusED
    # corpusB = map(lambda a: a if len(a) > 0 else "\0", corpusB)
    # corpusE = map(lambda a: a if len(a) > 0 else "\0", corpusE)
    # corpusED = list(filter(lambda a: len(a) > 0, corpusED))
    # corpusBC = map(lambda a: a if len(a) > 0 else "\0", corpusBC)
    # corpusEC = map(lambda a: a if len(a) > 0 else "\0", corpusEC)
    # print "*******************************"
    # print corpusED
    j = 0
    indexListBC = []
    for word in corpusED:
        if len(word) == 0:
            indexListBC.append(j)
            j += 1

    corpusED = list(filter(lambda a: len(a) > 0, corpusED))
    # print(len(corpusB))
    # print(len(corpusE))
    # print(len(corpusED))
    # print(len(corpusBC))
    # print(len(corpusEC))

    if corpusB:
        XB = vectorizer.fit_transform(corpusB)
        XB = XB.toarray()
    else:
        XB = [[]]

    if corpusE:
        XE = vectorizer.fit_transform(corpusE)
        XE = XE.toarray()
    else:
        XE = [[]]
    print corpusED
    if corpusED:
        XED = vectorizer.fit_transform(corpusED)
        XED = XED.toarray()
    else:
        XED = [[]]

    # print indexListBC
    for j in indexListBC:
        XED = numpy.insert(XED, j+1, numpy.zeros(XED.shape[1]), 0)

    # print XED
    # print(XED.shape)

    if corpusBC:
        XBC = vectorizer.fit_transform(corpusBC)
        XBC = XBC.toarray()
    else:
        XBC = [[]]

    if corpusEC:
        XEC = vectorizer.fit_transform(corpusEC)
        XEC = XEC.toarray()
    else:
        XEC = [[]]

    basicVector = []
    exprVector = []
    controlContextECVector = []
    controlContextBCVector = []
    exprDependVector = []

    # print XB.shape
    # print XE.shape
    # print XBC.shape
    # print XED.shape
    # print XEC.shape

    for j in range(len(dirList), len(corpusB)):
        for k in range(len(dirList)):
            sumB = 0
            sumE = 0
            sumEC = 0
            sumBC = 0
            sumED = 0

            for feat in range(XB.shape[1]):
                if (XB[k][feat] - XB[j][feat]) > 0:
                    sumB += XB[k][feat] - XB[j][feat]
            for feat in range(XE.shape[1]):
                if (XE[k][feat] - XE[j][feat]) > 0:
                    sumE += XE[k][feat] - XE[j][feat]
            for feat in range(XBC.shape[1]):
                if (XBC[k][feat] - XBC[j][feat]) > 0:
                    sumBC += XBC[k][feat] - XBC[j][feat]
            for feat in range(XED.shape[1]):
                if (XED[k][feat] - XED[j][feat]) > 0:
                    sumED += XED[k][feat] - XED[j][feat]
            for feat in range(XEC.shape[1]):
                if (XEC[k][feat] - XEC[j][feat]) > 0:
                    sumEC += XEC[k][feat] - XEC[j][feat]

            basicVector.append(sumB)
            exprVector.append(sumE)
            controlContextECVector.append(sumEC)
            controlContextBCVector.append(sumBC)
            exprDependVector.append(sumED)

        basicVector.sort()
        exprVector.sort()
        controlContextECVector.sort()
        controlContextBCVector.sort()
        exprDependVector.sort()

        basicAll.append(numpy.sum(basicVector[:25]) / 25)
        controlContextECAll.append(numpy.sum(controlContextECVector[:25]) / 25)
        exprAll.append(numpy.sum(exprVector[:25]) / 25)
        controlContextBCAll.append(numpy.sum(controlContextBCVector[:25]) / 25)
        exprDependAll.append(numpy.sum(exprDependVector[:25]) / 25)


rows = []
with open('dataset/worksheet.csv', 'rb') as f:
    reader = csv.reader(f)
    for row in reader:
        rows.append(row)

print(rows[1])
j = 0
for i in range(1, len(rows)):
    if rows[i][2] != 'accepted':
        rows[i].append(basicAll[j])
        rows[i].append(controlContextECAll[j])
        rows[i].append(exprAll[j])
        rows[i].append(controlContextBCAll[j])
        rows[i].append(exprDependAll[j])
        j += 1
    else:
        rows[i].append(1)

with open('dataset/worksheet.csv', 'wb') as f:
    writer = csv.writer(f)
    writer.writerows(rows)
