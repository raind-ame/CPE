#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[9];
    while (cin >> a[0]) {
        vector<pair<int, int>> v;
        for (int i = 1; i < 9; i++) cin >> a[i];
        for (int i = 0; i < 9; i++) {
            if (a[i] != 0) v.push_back({a[i], 8-i});
        }
        for (size_t i = 0; i < v.size()-1; i++)
        {
            if (v[i].first == 1 || v[i].first == -1) printf("x^%d", v[i].second);
            else printf("%dx^%d", v[i].first, v[i].second);
            
            if (v[i+1].first < 0) cout << " - ";
            else cout << " + ";
        }
        if (v[v.size()-1].second == 0) cout << abs(v[v.size()-1].first);
        else {
            if (v[v.size()-1].first == 1 || v[v.size()-1].first == -1) printf("x^%d", v[v.size()-1].second);
            else printf("%dx^%d", abs(v[v.size()-1].first), v[v.size()-1].second);
        }  
    }


    return 0;
}