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
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        vector<int> dp(n + 1, 0);
        dp[n - 1] = 1;
        for (int i = n - 1; i > -1; i--)
        {
            dp[i] = dp[i + 1] + 1;
            if (i + a[i] < n)
            {
                dp[i] = min(dp[i], dp[i + a[i] + 1]);
            }
        }

        cout << dp[0] << endl;
    }
}
