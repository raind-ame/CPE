try:
    while True:
        x = int(input())
        a = [int(i) for i in input().split()]
        # [2, 2, 2] -> [4, 2]
        l = len(a) - 2
        ans = 0
        for t,i in enumerate(a):
            if l-t != -1:
                ans += i*(len(a)-(1+t))*(x**(l-t))
        print(int(ans))
        

except EOFError:
    pass