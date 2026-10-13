#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (size_t z = 0; z < t; z++)
    {
        int n;
        cin >> n;
        map<char, int> m;
        vector<pair<char, int>> a;
        string s;
        cin.ignore();
        getline(cin, s, '#');
        for (size_t i = 0; i < n; i++)
        {
            m[char(65 + i)] = 0;
        }
        for (size_t i = 0; i < s.length(); i++)
        {
            if (int(s[i]) >= 'A' && int(s[i]) < 'A' + n)
            {
                m[s[i]] += 1;
            }
        }
        for (auto &p : m)
        {
            a.push_back(make_pair(p.first, p.second));
        }
        sort(a.begin(), a.end(), [](const pair<char, int> &a, const pair<char, int> &b)
             {
            if (a.second != b.second) return a.second > b.second;
            return a.first < b.first; });

        map<int, set<char>> p;

        for (auto &o : a)
        {
            p[o.second].insert(o.first);
        }

        vector<pair<char, int>> ans;
        pair<int, int> can_use[n / 2 + n % 2];

        int j = 0;
        for (int i = 0; i < n / 2; i++)
        {
            can_use[i].first = a[j].second;
            j++;
            can_use[i].second = a[j].second;
            j++;
        }
        if (n % 2 == 1)
        {
            can_use[n / 2].first = a[n - 1].second;
            can_use[n / 2].second = a[n - 1].second;
        }
        int k;
        for (size_t i = 0; i < n; i++)
        {
            k = min(i, n - i - 1);
            if (!p[can_use[k].first].empty() && !p[can_use[k].second].empty())
            {
                if (*p[can_use[k].first].begin() > *p[can_use[k].second].begin())
                {
                    ans.push_back(make_pair(*p[can_use[k].second].begin(), can_use[k].second));
                    p[can_use[k].second].erase(p[can_use[k].second].begin());
                    can_use[k].second = -1;
                }
                else
                {
                    ans.push_back(make_pair(*p[can_use[k].first].begin(), can_use[k].first));
                    p[can_use[k].first].erase(p[can_use[k].first].begin());
                    can_use[k].first = -1;
                }
            }
            else
            {
                if (p[can_use[k].first].empty())
                {
                    ans.push_back(make_pair(*p[can_use[k].second].begin(), can_use[k].second));
                    p[can_use[k].second].erase(p[can_use[k].second].begin());
                    can_use[k].second = -1;
                }
                else
                {
                    ans.push_back(make_pair(*p[can_use[k].first].begin(), can_use[k].first));
                    p[can_use[k].first].erase(p[can_use[k].first].begin());
                    can_use[k].first = -1;
                }
            }
        }

        int i = 0;
        for (auto &kv : ans)
        {
            if (i > 0)
                cout << ' ';
            cout << kv.first;
            i++;
        }
        cout << endl;
        i = 0;
        for (auto &kv : ans)
        {
            if (i > 0)
                cout << ' ';
            cout << kv.second;
            i++;
        }
        cout << endl;
    }
    return 0;
}