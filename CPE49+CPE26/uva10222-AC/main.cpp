// Uva 10222: Decode the Mad man
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string keyboard = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s;
    while(getline(cin, s))
    {
        for (char c: s)
        {
            if (c >= 'A' && c <= 'Z') c += 'a' - 'A';
            if (c != ' ' && c != '\n') cout << keyboard[keyboard.find(c)-2];
            else cout << c;
        }
        cout << "\n";
    }

    

    return 0;
}