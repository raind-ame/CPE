try:
    while True:
        a = [int(i) for i in input().split()]
        b = []
        for i in range(1, len(a)-1):
            b.append(abs(a[i] - a[i+1]))
        b.sort()
        j = True
        for i in range(1, len(b)-1):
            if b[i] + 1 != b[i+1]:
                j = False
                break
        if j:
            print("Jolly")
            continue
        print("Not jolly")

except EOFError:
    pass