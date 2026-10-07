t = int(input())
for l in range(t):
    p = input().split()
    n = int(p[-1])
    a = []
    b = False
    for i in range(n):
        a.append(input().split())
    for i in range(n):
        if b:
            break
        for j in range(n):
            if b:
                break
            if a[i][j] != a[n-i-1][n-j-1] or int(a[i][j]) < 0:
                b = True
    if not b:
        print(f"Test #{l+1}: Symmetric.")
        continue
    print(f"Test #{l+1}: Non-symmetric.")
    