#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    int sum, degree, temp;
    bool b;
    while (cin >> n)
    {
        if (n == "0")
            break;

        sum = 0;
        degree = 0;
        b = true;

        for (size_t i = 0; i < n.length(); i++)
            sum += n[i] - '0';

        while (sum > 9)
        {
            if (sum % 9 != 0)
                break;

            temp = 0;
            while (sum > 0)
            {
                temp += sum % 10;
                sum /= 10;
            }
            sum = temp;
            degree++;
        }
        if (sum % 9 != 0)
        {
            cout << n << " is not a multiple of 9." << endl;
            b = false;
        }
        if (b)
            cout << n << " is a multiple of 9 and has 9-degree " << degree + 1 << "." << endl;
    }

    return 0;
}