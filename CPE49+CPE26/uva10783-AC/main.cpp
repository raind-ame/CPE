#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b,c;
    cin >> n;
    c = n;
    while (n--)
    {
        cin >> a >> b;
        int ans = 0;
        for (size_t i = a; i <= b; i++)
        {
            if (i % 2 == 1)
                ans += i;
        }
        cout << "Case " << c-n << ": " << ans << endl;
    }

    return 0;
}