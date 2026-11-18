// Uva 10130: SuperSale
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> goods; // <price, weight>
int memo[31][1001];

int dfs(int bpw, int count)
{
    if (memo[bpw][count] != -1) return memo[bpw][count];

    if (bpw == 0 || count == goods.size())
    {
        memo[bpw][count] = 0;
        return 0;
    }

    int weight = goods[count].second, price = 0;
    if (weight <= bpw)
    {
        price += max(goods[count].first + dfs(bpw - weight, count + 1), dfs(bpw, count + 1));
        memo[bpw][count] = price;
        return price;
    }
    else return dfs(bpw, count + 1);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        goods.clear();
        memset(memo, -1, sizeof(memo));
        int N, P, W;
        cin >> N;
        int t = N;
        while (t--)
        {
            cin >> P >> W;
            goods.push_back(make_pair(P, W));
        }
        int G, MW, total = 0;
        cin >> G;
        while (G--)
        {
            int temp = 0;
            cin >> MW;
            total += dfs(MW, 0);
        }
        cout << total << "\n";
    }

    return 0;
}