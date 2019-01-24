from utils import buildCFG
import json

nums = 23


isTest = 6
if (isTest < 5):
    for i in range(nums):
        cfg = buildCFG("dataset/"+ str(i)+".c", 'main')
        with open('graph.json', "r") as f1:
            dta = json.load(f1)
            with open("data/" + str(i) + ".json", "w") as f2:
                json.dump(dta, f2)
if (isTest < 10):
    cfg = buildCFG("test.c", 'main')
    with open('graph.json', "r") as f1:
        dta = json.load(f1)
        with open("data/graph.json", "w") as f2:
            json.dump(dta, f2)


# print cfg.printer()
