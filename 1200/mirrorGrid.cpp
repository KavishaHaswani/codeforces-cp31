#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<char>> grid;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            grid.push_back(vector<char>(s.begin(), s.end()));
        }

        int ans = 0;
        for (int i = 0, c[2] = {0, 0}; i < n / 2; i++)
        {
            for (int j = i; j < (n + 1) / 2; j++)
            {
                c[grid[j][i] - '0']++;
                c[grid[i][n - j - 1] - '0']++;
                c[grid[n - i - 1][j] - '0']++;
                c[grid[n - j - 1][n - i - 1] - '0']++;

                ans += min(c[0], c[1]);
                c[0] = 0, c[1] = 0;
            }
            for (int j = i + 1; j < n / 2; j++)
            {
                c[grid[i][j] - '0']++;
                c[grid[j][n - i - 1] - '0']++;
                c[grid[n - j - 1][i] - '0']++;
                c[grid[n - i - 1][n - j - 1] - '0']++;

                ans += min(c[0], c[1]);
                c[0] = 0, c[1] = 0;
            }
        }
        cout << ans << endl;
    }
}