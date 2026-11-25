// Uva 10008: What's Cryptanalysis?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    int a[26] = {};
    cin >> n;
    cin.ignore();
    while (n--)
    {
        getline(cin, s);
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                a[s[i] - 'a']++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                a[s[i] - 'A']++;
            }
        }
    }
    for (size_t i = *max_element(a, a+26); i > 0; i--)
    {
        for (size_t j = 0; j < 26; j++)
        {
            if (a[j] == i) cout << (char)('A'+j) << " " << a[j] << endl;
        }
    }
    return 0;
}