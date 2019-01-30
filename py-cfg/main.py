# from utils import buildCFG
# import json
# import os
from utils import buildCFG

cfg = buildCFG('example.c', 'main')

print "[+] Size of the CFG:", str(cfg.size())
print cfg.printer()

# numOfQuestions = 11
# # nums = 23
#
# for i in range(numOfQuestions):
#     dirList = os.listdir("dataset/" + str(i + 1))  # dir is your directory path
#     for j in range(len(dirList) - 1):
#         cfg = buildCFG("dataset/" + str(i+1) + "/" + dirList[j], 'main')
#         with open('graph.json', "r") as f1:
#             dta = json.load(f1)
#         with open("data/" + str(i+1) + "/" + dirList[j][:-2] + ".json", "w") as f2:
#             json.dump(dta, f2)


# print cfg.printer()