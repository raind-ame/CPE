#include <bits/stdc++.h>
using namespace std;

void bangla(long long int n)
{
    if (n >= 10000000)
    {
        bangla(n / 10000000);
        cout << " kuti ";
        n %= 10000000;
    }

    if (n >= 100000)
    {
        cout << n / 100000 << " lakh ";
        n %= 100000;
    }

    if (n >= 1000)
    {
        cout << n / 1000 << " hajar ";
        n %= 1000;
    }

    if (n >= 100)
    {
        cout << n / 100 << " shata ";
        n %= 100;
    }

    if (n > 0)
        cout << n;
}

int main()
{
    long long int n;
    int count = 1;
    while (cin >> n)
    {
        cout << count << ". ";
        if (n > 0)
            bangla(n);
        else
            cout << "0";
        count++;
        cout << endl;
    }

    return 0;
}