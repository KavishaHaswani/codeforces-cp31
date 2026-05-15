#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d = 0;
        cin >> n >> k;
        vector<vector<short>> grid(n, vector<short>(n));
        for (auto &i : grid)
        {
            for (auto &j : i)
            {
                cin >> j;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] != grid[n - i - 1][n - j - 1])
                {
                    d++;
                }
            }
        }

        if (d / 2 <= k && ((k - d / 2) % 2 == 0 || n % 2 == 1))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}