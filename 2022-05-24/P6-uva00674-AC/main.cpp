#include <bits/stdc++.h>
using namespace std;

int coins[5] = {50, 25, 10, 5, 1};
int c[7500][5];

int dfs(int money, int index)
{
    if (money < 0)
    {
        return 0;
    }
    if (money == 0)
    {
        return 1;
    }
    int ans = 0;
    int coin;

    int temp = 0;
    for (size_t i = index; i <= 4; i++)
    {
        coin = coins[i];
        if (c[money][i] != -1)
        {
            ans += c[money][i];
            continue;
        }
        temp = dfs(money - coin, i);
        c[money][i] = temp;
        ans += temp;
    }
    return ans;
}

int main()
{
    memset(c, -1, sizeof(c));
    int n;

    while (cin >> n)
    {
        if (n == 0)
        {
            cout << "1\n";
            continue;
        }
        cout << dfs(n, 0) << endl;
    }

    return 0;
}