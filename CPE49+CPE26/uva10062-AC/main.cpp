// Uva 10062: Tell me the frequencies!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    int b = 0;

    while(getline(cin, n))
    {
        int a[128] = {};

        for (size_t i = 0; i < n.length(); i++)
        {
            a[n[i]] += 1;
        }
        if (!b) cout << "\n";
        b++;

        for (size_t i = 1; i < n.length(); i++)
        {

            for (size_t j = 127; j >= 32; j--)
            {
                if (a[j] == i) cout << j << " " << i << "\n";   
            }    
        }
    }
    return 0;
}