// UVa 10041
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    
    cin >> n;
    while (n--)
    {
        int d = 0;
        cin >> m;
        vector<int> number(m);

        for (int& num: number) cin >> num;
        sort(number.begin(), number.end());

        int house = number[m/2];
        for (int num: number)
        {
            d += abs(num - house);
        }
        cout << d << endl;
    }

    return 0;
}