# from utils import buildCFG
# import json
# import os
from utils import buildCFG
# from sklearn.feature_extraction.text import CountVectorizer
import json
import os

questionList = os.listdir("dataset_new1")
questionList.sort()
print questionList
# isTest = 6
# if (isTest < 5):
for i in range(len(questionList) - 2):
	dirList = os.listdir("dataset_new1/" + questionList[i])  # dir is your directory path
	dirList.sort()
	os.mkdir("data/" + questionList[i])
	for j in range(len(dirList) - 1):
		print(dirList[j])
		cfg = buildCFG("dataset_new1/" + questionList[i] + "/" + dirList[j])
		with open('graph.json', "r") as f1:
			dta = json.load(f1)
			with open("data/" + questionList[i] + "/" + dirList[j][:-2] + ".json", "w") as f2:
				json.dump(dta, f2)

	dirList = os.listdir("dataset_new1/" + questionList[i] + "/goodset")
	os.mkdir("data/" + questionList[i] + "/goodset")
	dirList.sort()
	for j in range(len(dirList)):
		print(dirList[j])
		cfg = buildCFG("dataset_new1/" + questionList[i] + "/goodset/" + dirList[j])
		with open('graph.json', "r") as f1:
			dta = json.load(f1)
			with open("data/" + questionList[i] + "/goodset/" + dirList[j][:-2] + ".json", "w") as f2:
				json.dump(dta, f2)


# if (isTest < 10):
# cfg = buildCFG("test.c" )


# print cfg.printer()


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
