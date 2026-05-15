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
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        long long y = accumulate(a.begin(), a.end(), 0ll);
        long long ad = 0, l = 0;
        for (long long i = 0, cur = 0; i < n; i++)
        {
            cur += a[i];
            if (cur <= 0)
            {
                cur = 0;
                l = i + 1;
            }
            if (l != 0 || i != n - 1)
            {
                ad = max(ad, cur);
            }
            if (ad >= y)
            {
                break;
            }
        }
        if (ad < y)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}