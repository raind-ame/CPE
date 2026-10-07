try:
    while True:
        n = int(input())
        nums = []
        ans1 = 0
        ans2 = 0
        a = n//2 - 1
        for i in range(n):
            nums.append(int(input()))
        nums.sort()
        if n % 2 == 1:
            a += 1
            ans2 = 1
            for i in nums:
                if i == nums[a]: ans1 += 1
        else:
            if nums[a+1] == nums[a]: ans2 = 1
            else: ans2 = nums[a+1] - nums[a] + 1

            for i in nums:
                if i == nums[a] or i == nums[a+1]: ans1 += 1

        
        print(f"{nums[a]} {ans1} {ans2}")

except EOFError:
    pass