from bs4 import BeautifulSoup
import urllib2
import os

problem_id = []
no_name = []
sources = []
verdicts = []

gen_url = 'https://www.codechef.com/status/INVLIS?sort_by=All&sorting_order=asc&language=44&status=All&handle=&Submit=GO'

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
    link = tr.find_all("td")[7].a.get('href')
    sources.append('https://www.codechef.com/viewplaintext' + link[13:])

n = len(sources)
fileNo = 0
os.chdir('dataset')

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
    with open(str(fileNo)+verdicts[i]+".cpp", "w") as f:
        f.write(code)
