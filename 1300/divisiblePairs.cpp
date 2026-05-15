#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        map<int, map<int, int>> mp; // (a % x): (a % y): count
        for (int i = 0, temp; i < n; i++)
        {
            cin >> temp;
            mp[temp % x][temp % y]++;
            // cout << temp % x << " " << temp % y << endl;
        }

        long long ans = 0;
        for (auto &[rx, i] : mp)
        {
            if (rx > x / 2)
            {
                break;
            }
            auto j = mp[(x - rx) % x];
            for (auto &[ry, k] : i)
            {
                auto l = max(0, j[ry] - ((x - rx) % x == rx ? 1 : 0));
                // cout << rx << " " << ry << " " << k << " " << l << endl;
                ans += (long long)k * l / ((x - rx) % x == rx ? 2 : 1);
            }
        }
        cout << ans << endl;
    }
}