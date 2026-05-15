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
        vector<int> a(n - 1), b(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        for (auto &j : b)
        {
            cin >> j;
        }
        a.push_back(1);

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ans = 0;
        for (int i = 0, j = 0; i < n && j < n; i++, j++)
        {
            while (j < n && a[i] >= b[j])
            {
                ans++;
                j++;
            }
        }
        cout << ans << endl;
    }
}