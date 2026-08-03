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
        vector<int> s(n);
        for (auto &i : s)
        {
            cin >> i;
        }

        vector<int> dp(n, 1);
        for (int i = 1; i <= n; i++)
        {
            for (int j = i * 2; j <= n; j += i)
            {
                if (s[j - 1] <= s[i - 1])
                {
                    continue;
                }
                dp[j - 1] = max(dp[j - 1], dp[i - 1] + 1);
            }
        }

        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
}
