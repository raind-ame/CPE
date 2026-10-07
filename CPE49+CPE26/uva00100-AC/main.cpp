#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,ans,count,n;
    while (cin >> a >> b)
    {
        ans = 0;
        if (a > b)
        {
            for (int i = b; i <= a; i++)
            {
                count = 0;
                n = i;
                while (n != 1)
                {
                    if (n % 2 == 1) {n = n*3+1;}
                    else {n = n / 2;}
                    count++;
                }
                if (count > ans) ans = count;
            }
            printf("%d %d %d\n", a,b,ans+1);  
        }

        else
        {
            for (int i = a; i <= b; i++)
            {
                count = 0;
                n = i;
                while (n != 1)
                {
                    if (n % 2 == 1) {n = n*3+1;}
                    else {n = n / 2;}
                    count++;
                }
                if (count > ans) ans = count;
            }
            printf("%d %d %d\n", a,b,ans+1);
        }

    }

    return 0;
}