// Uva 10405: Longest Common Subsequence
#include <bits/stdc++.h>
using namespace std;

string a, b;
int as, bs;
int memo[1001][1001];

int dfs(int c, int d)
{
    if (c == as || d == bs) return 0;
    for (size_t j = d; j < bs; j++)
    {
        if (a[c] == b[j])
        {
            if (memo[c][d] != -1) return memo[c][d];
            else 
            {
                memo[c][d] = max(1 + dfs(c+1, j+1), dfs(c+1, d));
                return memo[c][d];
            }
        }
    }
    return dfs(c+1, d);
}

int main()
{
    while (getline(cin, a))
    {
        getline(cin, b);
        memset(memo, -1, sizeof(memo));
        as = a.size();
        bs = b.size();
        cout << dfs(0, 0) << "\n";
    }
    
    return 0;
}