# from utils import buildCFG
#
# cfg = buildCFG('example.c', 'main')
#
# print "[+] Size of the CFG:", str(cfg.size())
# print cfg.printer()

from utils import buildCFG
import json
import os

numOfQuestions = 11
# nums = 23

# isTest = 6
# if (isTest < 5):
for i in range(4, numOfQuestions):
        dirList = os.listdir("dataset/" + str(i + 1))  # dir is your directory path
        for j in range(len(dirList) - 1):
            print(dirList[j])
            cfg = buildCFG("dataset/" + str(i + 1) + "/" + dirList[j], 'main')
            with open('graph.json', "r") as f1:
                dta = json.load(f1)
                with open("data/" + str(i + 1) + "/" + dirList[j][:-2] + ".json", "w") as f2:
                    json.dump(dta, f2)

        dirList = os.listdir("dataset/" + str(i + 1) + "/goodset")
        os.mkdir("data/" + str(i + 1) + "/goodset")
        for j in range(len(dirList)):
            cfg = buildCFG("dataset/" + str(i + 1) + "/goodset/" + dirList[j], 'main')
            with open('graph.json', "r") as f1:
                dta = json.load(f1)
                with open("data/" + str(i + 1) + "/goodset/" + dirList[j][:-2] + ".json", "w") as f2:
                    json.dump(dta, f2)

# if (isTest < 10):
#     cfg = buildCFG("test.c", 'main')
#     with open('graph.json', "r") as f1:
#         dta = json.load(f1)
#         with open("data/graph.json", "w") as f2:
#             json.dump(dta, f2)


# print cfg.printer()
