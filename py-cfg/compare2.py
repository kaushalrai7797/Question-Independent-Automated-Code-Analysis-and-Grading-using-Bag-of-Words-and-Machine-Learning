from GetGraphs import GetGraphs
import numpy
import os
from collections import OrderedDict
import csv

basicAll = []
controlContextECAll = []
exprAll = []
controlContextBCAll = []
exprDependAll = []

questionList = os.listdir("data2")
for i in range(len(questionList)):
    corpusB = []
    corpusBC = []
    corpusEC = []
    corpusED = []
    corpusE = []

    dirList = os.listdir("data2/" + questionList[i])  # dir is your directory path
    x = GetGraphs(len(dirList) - 1)
    trainData = x.graphs(questionList[i], dirList)
    dirList = os.listdir("data2/" + questionList[i] + "/goodset")
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


    dict = {}
    j = 0
    if corpusB:
        for sentence in corpusB:
            for word in sentence:
                if word not in dict:
                    dict[word] = j
                    j = j + 1

        XB = numpy.zeros([len(corpusB), len(dict)])
        j = 0
        for sentence in corpusB:
            # arr = numpy.zeros(len(dict))
            for word in sentence:
                XB[j][dict[word]] += 1
            j += 1

    dict = {}
    j = 0
    if corpusE:
        for sentence in corpusE:
            for word in sentence:
                if word not in dict:
                    dict[word] = j
                    j = j + 1

        XE = numpy.zeros([len(corpusE), len(dict)])
        j = 0
        for sentence in corpusE:
            # arr = numpy.zeros(len(dict))
            for word in sentence:
                XE[j][dict[word]] += 1
            j += 1

    dict = {}
    j = 0
    if corpusED:
        for sentence in corpusED:
            for word in sentence:
                if word not in dict:
                    dict[word] = j
                    j = j + 1

        XED = numpy.zeros([len(corpusED), len(dict)])
        j = 0
        for sentence in corpusED:
            # arr = numpy.zeros(len(dict))
            for word in sentence:
                XED[j][dict[word]] += 1
            j += 1

    dict = {}
    j = 0
    if corpusBC:
        for sentence in corpusBC:
            for word in sentence:
                if word not in dict:
                    dict[word] = j
                    j = j + 1

        XBC = numpy.zeros([len(corpusBC), len(dict)])
        j = 0
        for sentence in corpusBC:
            # arr = numpy.zeros(len(dict))
            for word in sentence:
                XBC[j][dict[word]] += 1
            j += 1

    dict = {}
    j = 0
    if corpusEC:
        for sentence in corpusEC:
            for word in sentence:
                if word not in dict:
                    dict[word] = j
                    j = j + 1

        XEC = numpy.zeros([len(corpusEC), len(dict)])
        j = 0
        for sentence in corpusEC:
            # arr = numpy.zeros(len(dict))
            for word in sentence:
                XEC[j][dict[word]] += 1
            j += 1

    print XB.shape
    print XE.shape
    print XEC.shape
    print XBC.shape
    print XED.shape

    for j in range(len(dirList), len(corpusB)):

        basicVector = []
        exprVector = []
        controlContextECVector = []
        controlContextBCVector = []
        exprDependVector = []

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

        print len(basicVector)
        print len(exprVector)
        print len(controlContextECVector)
        print len(controlContextBCVector)
        print len(exprDependVector)

        sumVector = {}

        for feat in range(len(basicVector)):
            sumVector[feat] = basicVector[feat] + exprVector[feat] + controlContextECVector[feat] + controlContextBCVector[feat] + exprDependVector[feat]

        sumVector = OrderedDict(sorted(sumVector.items(), key=lambda x: x[1]))
        print sumVector
        bVal = 0
        bcVal = 0
        ecVal = 0
        eVal = 0
        edVal = 0
        leng = 0
        for iter in sumVector:
            if leng < 5:
                bVal += basicVector[int(iter)]
                bcVal += controlContextBCVector[int(iter)]
                ecVal += controlContextECVector[int(iter)]
                eVal += exprVector[int(iter)]
                edVal += exprDependVector[int(iter)]
                leng += 1

        basicAll.append(bVal/leng)
        controlContextECAll.append(ecVal/leng)
        exprAll.append(eVal/leng)
        controlContextBCAll.append(bcVal/leng)
        exprDependAll.append(edVal/leng)

rows = []
with open('dataset_new1/worksheet.csv', 'rb') as f:
    reader = csv.reader(f)
    for row in reader:
        rows.append(row)

print(rows[1])
j = 0
print len(rows)
print len(basicAll)
print len(controlContextBCAll)
for i in range(1, len(rows)):
    if rows[i][2] != 'accepted':
        rows[i].append(basicAll[j])
        rows[i].append(controlContextECAll[j])
        rows[i].append(exprAll[j])
        rows[i].append(controlContextBCAll[j])
        rows[i].append(exprDependAll[j])
        print i
        print j
        j += 1

with open('dataset_new1/worksheet.csv', 'wb') as f:
    writer = csv.writer(f)
    writer.writerows(rows)
