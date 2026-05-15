#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long ans = 0;
        cin >> n;
        vector<pair<int, int>> a(n);
        vector<int> pos(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end(), greater<pair<int, int>>());
        for (int i = 1, cur = 1; i < n; i += 2, cur++)
        {
            ans += (long long)2 * cur * (a[i - 1].first + a[i].first);
            pos[a[i - 1].second] = -cur;
            pos[a[i].second] = cur;
        }
        if (a.size() % 2 == 1)
        {
            int cur = a.size() / 2 + 1, i = a.size() - 1;
            ans += (long long)2 * cur * a[i].first;
            pos[a[i].second] = cur;
        }
        cout << ans << endl
             << 0 << " ";
        for (auto i : pos)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}