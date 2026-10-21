#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    string s = "", sn = "";

    while (cin >> n)
    {
        s = "";
        sn = "";
        c = 0;
        if (n == 0)
            break;
        while (n > 0)
        {
            s += (char)('0' + n % 2);
            n /= 2;
        }
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                c++;
            sn += s[s.length() - i - 1];
        }

        cout << "The parity of " << sn
             << " is " << c << " (mod 2)." << endl;
    }

    return 0;
}

