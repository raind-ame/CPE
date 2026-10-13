#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> ws;                 // ws 跳過 n 後面的換行
        string s;
        getline(cin, s, '#');

        // 1. 計數：只算前 n 個字母
        int cnt[26] = {};
        for (char c : s)
            if (c >= 'A' && c < 'A' + n) cnt[c - 'A']++;

        // 2. 數量由大到小排，兩兩一組；n 是奇數時，中間那組只有一個數量，另一個填 -1
        vector<int> v(cnt, cnt + n);
        sort(v.rbegin(), v.rend());
        vector<pair<int, int>> pr;
        for (int i = 0; i < n; i += 2)
            pr.push_back({v[i], i + 1 < n ? v[i + 1] : -1});

        // 3. 照輸出順序一格一格填：從 A 往後找第一個「沒用過、數量符合」的字母
        bool used[26] = {};
        vector<int> ans;                // 存字母編號 0 ~ n-1
        for (int i = 0; i < n; i++)
        {
            auto &q = pr[min(i, n - 1 - i)];   // 第 i 格屬於哪一對
            for (int c = 0; c < n; c++)
            {
                if (used[c]) continue;
                if (cnt[c] == q.first)       q.first = -1;    // 用掉這個數量
                else if (cnt[c] == q.second) q.second = -1;
                else continue;
                used[c] = true;
                ans.push_back(c);
                break;
            }
        }

        // 4. 輸出：最後一個後面接換行，其他接空白
        for (int i = 0; i < n; i++) cout << char('A' + ans[i]) << " \n"[i == n - 1];
        for (int i = 0; i < n; i++) cout << cnt[ans[i]] << " \n"[i == n - 1];
    }
    return 0;
}
