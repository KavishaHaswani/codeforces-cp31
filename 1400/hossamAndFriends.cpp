#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        unordered_map<int, int> mp;
        for (int i = 0, x, y; i < m; i++)
        {
            cin >> x >> y;
            mp[max(x, y)] = max(mp[max(x, y)], (min(x, y)));
        }

        long long ans = n;
        for (int l = 1, r = 1; r < n;)
        {
            r++;
            l = max(l, mp[r] + 1);
            ans += 0ll + (r - l);
        }
        cout << ans << endl;
    }
}