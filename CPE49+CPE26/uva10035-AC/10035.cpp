// Uva 10035: Primary Arithmetic
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, carry, t;
    while (1)
    {
        carry = 0;
        t = 0;
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;

        while (a > 0 || b > 0)
        {
            if (a % 10 + b % 10 + carry > 9)
            {
                t++;
                carry = 1;
            }
            else
                carry = 0;
            a /= 10;
            b /= 10;
        }
        if (!t)
            cout << "No carry operation." << endl;
        else if (t == 1)
            cout << "1 carry operation." << endl;
        else
            cout << t << " carry operations." << endl;
    }

    return 0;
}