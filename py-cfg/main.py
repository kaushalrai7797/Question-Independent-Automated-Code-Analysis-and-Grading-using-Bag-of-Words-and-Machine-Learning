# from utils import buildCFG
# import json
# import os
from utils import buildCFG
import json
import os

questionList = os.listdir("dataset")
# isTest = 6
# if (isTest < 5):
for i in range(len(questionList)):

		if (questionList[i] == 'worksheet.csv' or questionList[i] == 'worksheet1.csv'): continue

		dirList = os.listdir("dataset/" + questionList[i])  # dir is your directory path
		os.mkdir("data/" + questionList[i])
		for j in range(len(dirList)):
			print(dirList[j])
			if (dirList[j] == 'goodset'): continue
			cfg = buildCFG("dataset/" + questionList[i] + "/" + dirList[j], 'main')
			with open('graph.json', "r") as f1:
				dta = json.load(f1)
				with open("data/" + questionList[i] + "/" + dirList[j][:-2] + ".json", "w") as f2:
					json.dump(dta, f2)

		dirList = os.listdir("dataset/" + questionList[i] + "/goodset")
		os.mkdir("data/" + questionList[i] + "/goodset")
		for j in range(len(dirList)):
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


# print cfg.printer()
