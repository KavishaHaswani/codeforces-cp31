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
        vector<long long> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        if (k > 2)
        {
            cout << 0 << endl;
        }
        else
        {
            long long mn = *min_element(a.begin(), a.end());
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    mn = min(mn, max(a[j], a[i]) - min(a[j], a[i]));
                }
            }
            if (k == 1)
            {
                cout << mn << endl;
            }
            else
            {
                sort(a.begin(), a.end());
                for (int i = 0; i < n; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        long long k = abs(a[j] - a[i]);
                        int l = 0, r = n - 1, m;
                        while (l <= r)
                        {
                            m = (l + r) / 2;
                            mn = min(mn, max(k, a[m]) - min(k, a[m]));
                            if (k < a[m])
                            {
                                r = m - 1;
                            }
                            else
                            {
                                l = m + 1;
                            }
                        }
                    }
                }
                cout << mn << endl;
            }
        }
    }
}