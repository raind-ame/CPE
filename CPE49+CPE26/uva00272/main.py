try:
    first = True
    while True:
        a = input()
        while '"' in a:
            if first:
                a = a.replace('"', "``", 1)
                first = False
            else:
                a = a.replace('"', "''", 1)
                first = True
        print(a)

except EOFError:
    pass