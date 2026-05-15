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
        int n, p;
        cin >> n >> p;
        vector<pair<int, int>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].second;
        }
        sort(a.begin(), a.end(), [](auto b, auto c)
             { return b.second < c.second; });
        long long ans = p;
        n--;
        int i = 0;
        for (int i = 0; i < a.size() && a[i].second < p && n > 0; i++)
        {
            ans += (long long)min(n, a[i].first) * a[i].second;
            n -= a[i].first;
        }
        if (n > 0)
        {
            ans += (long long)n * p;
        }
        cout << ans << endl;
    }
}