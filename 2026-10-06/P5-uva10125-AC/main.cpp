#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n) {
        if (!n) break;

        int nums[n];
        bool ans = false;
        map<int, vector<pair<int, int>>> m;
        
        for (size_t i = 0; i < n; i++) cin >> nums[i];
        sort(nums, nums+n);
        
        for (int i = 0; i < n; i++) for (int j = i+1; j < n; j++)
        {
            int a = nums[i], b = nums[j];
            m[a+b].push_back(make_pair(a, b));
        }

        for (int i = n-1; i >= 0; i--) for (int j = 0; j < n; j++)
        {
            if (ans) break;
            if (i == j) continue;
            int c = nums[j];
            int d = nums[i];
            if (m.count(d-c)) {
                for (size_t t = 0; t < m[d-c].size(); t++)
                {
                    if (ans) break;
                    int a = m[d-c][t].first;
                    int b = m[d-c][t].second;
                    if (!(d == a || d == b || c == a || c == b)) {
                        cout << d << endl;
                        ans = true;
                        break;
                    }
                }
            }
        }
        if (!ans) cout << "no solution" << endl;
    }

    return 0;
}



