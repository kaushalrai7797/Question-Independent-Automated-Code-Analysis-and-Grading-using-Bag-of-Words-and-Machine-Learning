from GetGraphs import GetGraphs
import numpy
import os
import csv
from sklearn.feature_extraction.text import CountVectorizer

basicAll = []
controlContextECAll = []
exprAll = []
controlContextBCAll = []
exprDependAll = []

questionList = os.listdir("data2")
# print(questionList)
# for i in range(1, len(questionList)):
for i in range(len(questionList)):
    corpusB = []
    corpusBC = []
    corpusEC = []
    corpusED = []
    corpusE = []

    # print(questionList[i])
    dirList = os.listdir("data2/" + questionList[i])  # dir is your directory path
    x = GetGraphs(len(dirList) - 1)
    trainData = x.graphs(questionList[i], dirList)
    dirList = os.listdir("data2/" + questionList[i] + "/goodset")
    # print(dirList)
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

    # vectorizer = CountVectorizer(stop_words=[])

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
    # j = 0
    # indexListBC = []
    # for word in corpusED:
    #     if len(word) == 0:
    #         indexListBC.append(j)
    #         j += 1

    # corpusED = list(filter(lambda a: len(a) > 0, corpusED))
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
            # XED = numpy.append(XED, arr)
    # print XED
    # print corpusED
    # if corpusED:
    #     XED = vectorizer.fit_transform(corpusED)
    #     XED = XED.toarray()
    # else:
    #     XED = [[]]
    #
    # for j in indexListBC:
    #     XED = numpy.insert(XED, j+1, numpy.zeros(XED.shape[1]), 0)

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

    basicVector = []
    exprVector = []
    controlContextECVector = []
    controlContextBCVector = []
    exprDependVector = []

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

        # print "***************"
        # print numpy.sum(basicVector[:25])/min(len(basicVector), 25)
        # print min(len(basicVector), 25)
        # print numpy.sum(basicVector[:25])
        basicAll.append(numpy.sum(basicVector[:25]) / min(len(basicVector), 25))
        controlContextECAll.append(numpy.sum(controlContextECVector[:25]) / min(len(controlContextECVector), 25))
        exprAll.append(numpy.sum(exprVector[:25]) / min(len(exprVector), 25))
        controlContextBCAll.append(numpy.sum(controlContextBCVector[:25]) / min(len(controlContextBCVector), 25))
        exprDependAll.append(numpy.sum(exprDependVector[:25]) / min(len(exprDependVector), 25))

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
