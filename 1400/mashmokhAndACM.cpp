#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int mod = 1e9 + 7, ans = 0;
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        dp[i][1] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            for (int p = 1; p < k; p++)
            {
                dp[j][p + 1] = (dp[j][p + 1] + dp[i][p]) % mod;
            }
        }
        ans = (ans + dp[i][k]) % mod;
        // cout << dp[i][k] << endl;
    }

    cout << ans << endl;
}
