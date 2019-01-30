from bs4 import BeautifulSoup
import urllib2
import os
# import xlsxwriter
import openpyxl

problem_id = []
no_name = []
sources = []
verdicts = []
memoryUsed = []

gen_url = 'https://www.codechef.com/status/ADASTAIR?sort_by=All&sorting_order=asc&language=11&status=All&handle=&Submit=GO'

hdr = {'User-Agent': 'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.11 (KHTML, like Gecko) Chrome/23.0.1271.64 Safari/537.11',
       'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8',
       }

req = urllib2.Request(gen_url, headers=hdr)

try:
    page = urllib2.urlopen(req)
except urllib2.HTTPError, e:
    print e.fp.read()

content = page.read()

soup = BeautifulSoup(content, 'html.parser')
tables = soup.find_all("table")
table = [table for table in tables if (table.get("class") and table.get("class")[0] == "dataTable")][0]
trs = table.find_all("tr")
trs = trs[1:]

for tr in trs:
    verdict = tr.find_all("td")[3].span.attrs['title']
    verdicts.append(verdict)
    mem = tr.find_all("td")[7]
    memoryUsed.append(mem)
    link = tr.find_all("td")[7].a.get('href')
    sources.append('https://www.codechef.com/viewplaintext' + link[13:])

n = len(sources)
fileNo = 0
question = 1
os.chdir('dataset/' + question)

for i in range(n):
    global hdr
    req = urllib2.Request(sources[i], headers=hdr)
    try:
        page = urllib2.urlopen(req)
    except urllib2.HTTPError, e:
        print e.fp.read()

    content = page.read()
    soup = BeautifulSoup(content, 'html.parser')
    code = soup.text
    fileNo = fileNo + 1
    with open(str(fileNo) + ".c", "w") as f:
        f.write(code)

# Create a workbook and add a worksheet.
workbook = openpyxl.Workbook('feat.xlsx')
worksheet = workbook.active()
row = 0
col = 0
fileNo = 0
for memr in memoryUsed:
    worksheet.append(row, col, fileNo + 'question' + question)
    worksheet.append(row, col + 1, memr)
    row += 1
    fileNo += 1

workbook.close()
