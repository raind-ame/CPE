// UVa 12019
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int days[] = {0, 31,28,31,30,31,30,31,31,30,31,30};
    string word[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int n, m, d, day;
    cin >> n;
    while (n--)
    {
        day = 0;
        cin >> m >> d;
        for (size_t i = 0; i < m; i++)
        {
            day += days[i];
        }
        day += d;
        cout << word[(day+5)%7] << endl;
    }


    return 0;
}