from utils import buildCFG

cfg = buildCFG('example.c', 'main')

print "[+] Size of the CFG:", str(cfg.size())
print cfg.printer()
