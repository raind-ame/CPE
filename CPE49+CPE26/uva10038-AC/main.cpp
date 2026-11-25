// Uva 10038: Jolly Jumpers
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        vector<int> a, b;
        istringstream ss(s);
        int c;
        while (ss >> c) a.push_back(c);

        for (size_t i = 1; i + 1 < a.size(); i++)
        {
            b.push_back(abs(a[i] - a[i+1]));
        }
        sort(b.begin(), b.end());
        bool j = true;
        for (size_t i = 0; i < b.size(); i++)
        {
            if (b[i] != (int)i + 1)
            {
                j = false;
                break;
            }
        }
        if (j)
        {
            cout << "Jolly\n"; 
        }
        else cout << "Not jolly\n";
    }
    return 0;
}