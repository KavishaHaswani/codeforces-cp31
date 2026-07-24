#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        unordered_map<int, int> remainderCount;
        for (auto i : a)
        {
            int a = k - i % k;
            remainderCount[a]++;
        }

        long long ans = 0;
        for (auto j : remainderCount)
        {
            if (j.first == k)
            {
                continue;
            }
            ans = max(ans, 1ll + j.first + 1ll * k * (j.second - 1));
        }

        cout << ans << endl;
    }
}
