# from utils import buildCFG
# import json
# import os
from utils import buildCFG
from sklearn.feature_extraction.text import CountVectorizer
import json
import os

questionList = os.listdir("dataset")
# isTest = 6
# if (isTest < 5):
for i in range(1, len(questionList)):
    dirList = os.listdir("dataset/" + questionList[i])  # dir is your directory path
    os.mkdir("data/" + questionList[i])
    for j in range(1, len(dirList) - 1):
        print(dirList[j])
        cfg = buildCFG("dataset/" + questionList[i] + "/" + dirList[j], 'main')
        with open('graph.json', "r") as f1:
            dta = json.load(f1)
            with open("data/" + questionList[i] + "/" + dirList[j][:-2] + ".json", "w") as f2:
                json.dump(dta, f2)

    dirList = os.listdir("dataset/" + questionList[i] + "/goodset")
    os.mkdir("data/" + questionList[i] + "/goodset")
    for j in range(1, len(dirList)):
        print(dirList[j])
        cfg = buildCFG("dataset/" + questionList[i] + "/goodset/" + dirList[j], 'main')
        with open('graph.json', "r") as f1:
            dta = json.load(f1)
            with open("data/" + questionList[i] + "/goodset/" + dirList[j][:-2] + ".json", "w") as f2:
                json.dump(dta, f2)


# if (isTest < 10):
#     cfg = buildCFG("test.c", 'main')
#     with open('graph.json', "r") as f1:
#         dta = json.load(f1)
#         with open("data/graph.json", "w") as f2:
#             json.dump(dta, f2)


# cfg = buildCFG('test.c', 'main')
# with open('data/1/goodset/2.json', "r") as f1:
#     dta = json.load(f1)
# with open('data/1/1.json', "r") as f1:
#     dta1 = json.load(f1)
# print dta['features'][0]['basic']
# featBasic = " ".join(dta['features'][0]['basic'])
# corpus = []
# corpus.append(featBasic)
# corpus.append(" ".join(dta1['features'][0]['basic']))
# vectorizer = CountVectorizer()
# X = vectorizer.fit_transform(corpus)
# print(vectorizer.get_feature_names())
# print(X.toarray())

# print cfg.printer()
