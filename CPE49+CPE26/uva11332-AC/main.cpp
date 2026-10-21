#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while (cin >> n)
    {
        if (n == 0)
            break;

        int ans = 0;
        while (n / 10)
        {
            int temp1 = n;
            int temp2 = 0;

            while (temp1 / 10)
            {
                temp2 += temp1 % 10;
                temp1 /= 10;
            }
            temp2 += temp1;
            n = temp2;
        }
        cout << n << endl;
    }

    return 0;
}