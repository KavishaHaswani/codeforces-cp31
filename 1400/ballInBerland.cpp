#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(k), b(k);
        for (auto &i : a)
        {
            cin >> i;
        }
        for (auto &i : b)
        {
            cin >> i;
        }

        unordered_map<int, vector<int>> boysToGirls, girlsToBoys;
        for (int i = 0; i < k; i++)
        {
            boysToGirls[a[i]].push_back(b[i]);
            girlsToBoys[b[i]].push_back(a[i]);
        }

        long long ans = 1ll * k * (k - 1) / 2;
        for (auto &i : boysToGirls)
        {
            ans -= i.second.size() * (i.second.size() - 1) / 2;
        }
        for (auto &i : girlsToBoys)
        {
            ans -= i.second.size() * (i.second.size() - 1) / 2;
        }

        cout << ans << endl;
    }
}
