#include <bits/stdc++.h>
using namespace std;

int solve(vector<long long> &factorials, long long n)
{
    int ans = 100, f = factorials.size();
    for (int mask = 0; mask < (1LL << f + 1); mask++)
    {
        long long sum = 0;
        int cnt = 0;
        for (int i = 0; i < f; i++)
        {
            if (mask & (1LL << i))
            {
                sum += factorials[i];
                cnt++;
            }
        }
        ans = min(ans, cnt + __builtin_popcountll(n - sum));
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> factorials;
        for (long long i = 3, j = 6; j <= n; i++, j *= i)
        {
            factorials.push_back(j);
        }

        cout << solve(factorials, n) << endl;
    }
}
