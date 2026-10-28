n = int(input())

for i in range(n):
    count = 0
    z = input()
    a = [int(j) for j in input().split()]

    for t in range(len(a)-1):
        for f in range(len(a) - 1 - t):
            if a[f] > a[f+1]:
                count += 1
                temp = a[f]
                a[f] = a[f+1]
                a[f+1] = temp

    print(f'Optimal train swapping takes {count} swaps.')