def binary(x: str):
    ans = 0
    t = len(x)-1
    for i in x:
        if i == "1":
            ans += 2**t
        t -= 1   
    return ans     

import math

n = int(input())
for i in range(n):
    s1 = binary(input())
    s2 = binary(input())

    if math.gcd(s1, s2) == 1:
        print(f"Pair #{i+1}: Love is not all you need!")
        continue
    print(f"Pair #{i+1}: All you need is love!")