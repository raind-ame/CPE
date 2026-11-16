#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int n;

bool dfs(int a, int b, int count)
{
    if ((count) == n)
    {
        if (a == b) return true;
        else return false;
    }

    return (dfs(a+v[count], b, count+1) || dfs(a, b+v[count], count+1));
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(0);

    int m;
    string s;
    cin >> m;
    cin.ignore();

    for (size_t i = 0; i < m; i++)
    {
        v.clear();   
        getline(cin, s);
        istringstream ss(s);
        int x;
        while (ss >> x) v.push_back(x);
        n = v.size();

        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        if (dfs(0,0,0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    


    return 0;
}