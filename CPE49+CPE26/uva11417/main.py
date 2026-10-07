from math import gcd

while True:
    G = 0
    n = int(input())
    if n == 0:
        break
    for i in range(1, n):
        for j in range(i+1, n+1):
            G += gcd(i, j)
    print(G)