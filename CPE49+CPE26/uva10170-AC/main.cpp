#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int s, d;
    while (cin >> s >> d) {
        while (true) {
            if (d <= s) {cout << s << endl; break;}
            else d -= s++;
        }
    }

    return 0;
}