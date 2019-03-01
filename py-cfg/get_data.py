from bs4 import BeautifulSoup
import urllib2
import os

problem_name = ['QUADROOT', 'PCJ18C', 'TWONMS', 'FLOW015', 'SEBIHWY', 'SNELECT', 'SURVIVE', 'CHEFSQ', 'HS08TEST', 'SINS', 'CHEGLOVE', 'FCTRL2', 'CATSDOGS', 'SMRSTR', 'KFIB', 'XORNEY']

# 'SUBINC','NOTINCOM','TLG','LTM40AB',
q_num = 5

# os.mkdir('dataset_new')
os.chdir('dataset_new')

# with open('worksheet' + ".csv", "a") as f:
#     f.write("question, verdict, memory \n")
#
# with open('question_name' + ".csv", "a") as f:
#     f.write("question no, name \n")

for x in problem_name:

    no_name = []
    sources = []
    badcode = []
    verdicts = []
    mems = []


    gen_url = 'https://www.codechef.com/status/'+x+'?sort_by=All&sorting_order=asc&language=11&status=All&handle=&Submit=GO'
    print(gen_url);

    hdr = {'User-Agent': 'Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.11 (KHTML, like Gecko) Chrome/23.0.1271.64 Safari/537.11',
           'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8',
           }

    req = urllib2.Request(gen_url, headers=hdr)

    try:
        page = urllib2.urlopen(req)
    except urllib2.HTTPError, e:
        print e.fp.read()

    with open('question_name' + ".csv", "a") as f:
        f.write(str(q_num) + "," + x + "\n")

    content = page.read()

    soup = BeautifulSoup(content, 'html.parser')
    tables = soup.find_all("table")
    table = [table for table in tables if (table.get("class") and table.get("class")[0] == "dataTable")][0]
    trs = table.find_all("tr")
    trs = trs[1:]

    for tr in trs:
        verdict = tr.find_all("td")[3].span.attrs['title']
        if(verdict!='compilation error'):
            verdicts.append(verdict)
            # print(verdict)
            link = tr.find_all("td")[7].a.get('href')
            mem = tr.find_all("td")[5].string
            mems.append(mem)
            # print(mem)
            sources.append('https://www.codechef.com/viewplaintext' + link[13:])

    fileNo = 0
    n = len(sources)
    m = len(badcode)
    os.mkdir(str(q_num))
    os.chdir(str(q_num))
    os.mkdir('goodset')

    print("getting codes")

    for i in range(n):
        global hdr
        req = urllib2.Request(sources[i], headers=hdr)
        try:
            page = urllib2.urlopen(req)
        except urllib2.HTTPError, e:
            print e.fp.read()

        content = page.read()
        soup = BeautifulSoup(content, 'html.parser')
        code = soup.text.encode('utf-8')
        fileNo = fileNo + 1
        if verdicts[i] == 'accepted':
            os.chdir('goodset')
            with open(str(fileNo)+".c", "w") as f:
                f.write(code)
            os.chdir("..")
        else:
            with open(str(fileNo)+".c", "w") as f:
                f.write(code)

    os.chdir("..")

    cwd = os.getcwd()
    print(cwd)
    fileNo = 0

    print("populating csv files")

    for i in range(n):
        fileNo = fileNo + 1
        with open('worksheet' + ".csv", "a") as f:
            f.write("q" + str(q_num) +", s" + str(fileNo) + "," + verdicts[i] + "," + mems[i]+ "\n")

    q_num = q_num + 1
