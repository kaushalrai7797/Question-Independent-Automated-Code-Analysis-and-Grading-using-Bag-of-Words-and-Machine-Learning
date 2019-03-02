import subprocess
import os
from subprocess import Popen, PIPE, STDOUT
import csv
# print subprocess.check_output(['cppcheck', '--enable=style', 'dataset_new1/3'])

questionList = os.listdir("dataset_new1")
goodsetArr = []
arr = []
for i in range(len(questionList) - 2):
    question = questionList[i]
    solutionList = os.listdir("dataset_new1/" + question)
    for j in range(len(solutionList) - 1) :
        # subprocess.run(['cppcheck', '--enable=style', 'dataset_new1/' + question + '/' + solutionList[j]])
        # print(x[0])
        cmd = 'cppcheck --enable=style dataset_new1/' + question + '/' + solutionList[j]
        p = Popen(cmd, shell=True, stdin=PIPE, stdout=PIPE, stderr=STDOUT, close_fds=True)
        output = p.stdout.read()
        li = output.split("\n")
        count = 0
        for out in li:
            if "The scope of " in out:
                count += 1
        count = len(li) - count - 1 + count/3
        arr.append(count)

    solutionList = os.listdir("dataset_new1/" + question + "/goodset")
    print(solutionList)
    for j in range(len(solutionList)):
        cmd = 'cppcheck --enable=style dataset_new1/' + question + '/' + solutionList[j]
        p = Popen(cmd, shell=True, stdin=PIPE, stdout=PIPE, stderr=STDOUT, close_fds=True)
        output = p.stdout.read()
        li = output.split("\n")
        count = 0
        for out in li:
            if "The scope of " in out:
                count += 1
        count = len(li) - count - 1 + count / 3
        goodsetArr.append(count)

goodsetIdx = 0
idx = 0

rows = []
with open('dataset_new1/worksheet.csv', 'rb') as f:
    reader = csv.reader(f)
    for row in reader:
        rows.append(row)

print(rows[1])
print len(rows)
for i in range(1, len(rows)):
    if rows[i][2] != 'accepted':
        rows[i][4] = int(rows[i][4]) - arr[idx]
        rows[i].append(arr[idx])
        idx += 1
    else:
        rows[i][4] = int(rows[i][4]) - goodsetArr[goodsetIdx]
        rows[i].append(goodsetArr[goodsetIdx])
        goodsetIdx += 1

with open('dataset_new1/worksheet.csv', 'wb') as f:
    writer = csv.writer(f)
    writer.writerows(rows)

