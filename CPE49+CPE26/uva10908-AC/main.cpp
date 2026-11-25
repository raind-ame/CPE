// Uva 10908: Largest Square
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int M, N, Q;
        cin >> M >> N >> Q;
        string s[M];
        for (size_t i = 0; i < M; i++)
            cin >> s[i];

        cout << M << " " << N << " " << Q << "\n";
        while (Q--)
        {
            int r, c;
            cin >> r >> c;
            char target = s[r][c];
            int t = 1;
            while (1)
            {
                bool same = true;
                int range = t / 2 + 1;
                if ((r - range >= 0) && (r + range < M) && (c - range >= 0) && (c + range < N))
                {
                    for (size_t i = r - range; i <= r + range; i++)
                    {
                        if (!same)
                            break;
                        for (size_t j = c - range; j <= c + range; j++)
                        {
                            if (s[i][j] != target)
                            {
                                same = false;
                                break;
                            }
                        }
                    }
                }
                else
                    break;

                if (same)
                    t += 2;
                else
                    break;
            }
            cout << t << "\n";
        }
    }

    return 0;
}