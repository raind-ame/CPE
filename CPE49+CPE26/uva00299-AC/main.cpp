#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int count = 0;
        int z;
        cin >> z;
        int a[50];
        for (size_t i = 0; i < z; i++)
        {
            cin >> a[i];
        }

        for (size_t i = 0; i < z - 1; i++)
        {
            for (size_t j = 0; j < z - 1 - i; j++)
            {
                if (a[j] > a[j + 1])
                {
                    count++;
                    swap(a[j], a[j + 1]);
                }
            }
        }

        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }

    return 0;
}