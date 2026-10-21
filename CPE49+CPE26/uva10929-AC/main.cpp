#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    int o, e;
    while (cin >> n)
    {
        if (n == "0")
            break;

        o = 0;
        e = 0;

        for (size_t i = 0; i < n.length(); i++)
        {
            if (i % 2)
                o += (int)(n[i])-48;
            else
                e += (int)(n[i])-48;
        }
        if ((o - e) % 11 == 0) cout << n << " is a multiple of 11." << endl;
        else cout << n << " is not a multiple of 11." << endl;
    }

    return 0;
}