#include <bits/stdc++.h>

using namespace std;

bool isPallindrome(int n)
{
    string orig = to_string(n), rev = orig;
    reverse(rev.begin(), rev.end());
    return orig == rev;
}

int main()
{
    int limit = 4e4;
    vector<int> pallindromes;
    for (int i = 1; i <= limit; i++)
    {
        if (isPallindrome(i))
        {
            pallindromes.push_back(i);
        }
    }

    vector<int> dp(limit + 1, 0);
    dp[0] = 1;
    int mod = 1e9 + 7;
    for (auto j : pallindromes)
    {
        for (int i = 0; i <= limit - j; i++)
        {
            dp[i + j] = (dp[i + j] + dp[i]) % mod;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
}
