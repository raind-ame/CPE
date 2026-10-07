from math import fmod

for p in range(20):
    n, m = map(int, input().split())
    if n == 0 and m == 0: break
    a = []
    o = [[] for i in range(2*m-1)]
    e = [[] for i in range(2*m-1)]
    for i in range(n):
        p = int(input())
        if p % 2 == 1:
            o[int(fmod(p, m)) + m - 1].append(p)
        else: e[int(fmod(p, m)) + m - 1].append(p)
    for i in o:
        i.sort(reverse=True)
    for i in e:
        i.sort()
    print(n,m)
    for i in range(2*m-1):
        for s in o[i]: print(s)
        for s in e[i]: print(s)
        
print("0 0")