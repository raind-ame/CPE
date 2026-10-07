s = []

try:
    while True:
        s.append(input())
except EOFError:
    long = 0
    for i in s:
        long = max(long, len(i))
    for i in range(long):
        for j in range(len(s), 0, -1):
            try:
                print(s[j-1][i], end="")
            except IndexError:
                print(" ", end="")
        print("")