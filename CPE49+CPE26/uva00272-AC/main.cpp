#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    bool first = true;

    while (getline(cin, s))
    {
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == '"')
            {
                if (first)
                    cout << "``";
                else
                    cout << "''";

                first = !first;
            }
            else
                cout << s[i];
        }
        cout << endl;
    }

    return 0;
}