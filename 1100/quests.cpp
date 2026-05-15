#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, xpEarned = 0, maxi = 0, ans = 0;
        cin >> n >> k;
        vector<pair<int, int>> xp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> xp[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> xp[i].second;
        }
        for (int i = 0; i < k && i < n; i++)
        {
            maxi = max(maxi, xp[i].second);
            xpEarned += xp[i].first;
            ans = max(ans, xpEarned + (k - i - 1) * maxi);
        }
        cout << ans << endl;
    }
}