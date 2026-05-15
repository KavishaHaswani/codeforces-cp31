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

        vector<pair<int, int>> mn(n);
        for (int i = 0, k, a, mx; i < n; i++)
        {
            cin >> k;
            mx = 0;
            for (int j = 0; j < k; j++)
            {
                cin >> a;
                mx = max(mx, a - j);
            }
            mn[i] = {mx, k};
        }

        sort(mn.begin(), mn.end(), [](auto i, auto j)
             { return (i.first != j.first ? i.first < j.first : i.second > j.second); });

        int mx = 0;
        for (int i = 0, k = 0; i < n; i++)
        {
            mx = max(mx, mn[i].first - k + 1);
            k += mn[i].second;
        }
        cout << mx << endl;
    }
}