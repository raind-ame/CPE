// Uva 10190: Divide, But Not Quite Conquer!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    while (cin >> n >> m)
    {
        if (n < 2 || m < 2)
        {
            cout << "Boring!\n";
            continue;
        }
        bool boring = false;
        vector<long long int> nums;
        while (n > 1)
        {
            if (n % m != 0)
            {
                boring = true;
                n = 1;
            }
            else
            {
                nums.push_back(n);
                n /= m;
            }
        }
        if (boring)
            cout << "Boring!" << endl;
        else
        {
            for (int num : nums)
                cout << num << " ";
            cout << "1" << endl;
        }
    }
    return 0;
}