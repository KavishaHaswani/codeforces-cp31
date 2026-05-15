#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1), sm(n + 1);
        a[0] = sm[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sm[i] = sm[i - 1] + a[i];
            a[i] = max(a[i - 1], a[i]);
        }

        long long temp;
        for (int i = 0, temp; i < q; i++)
        {
            cin >> temp;
            if (temp > sm[n])
            {
                cout << sm[n] << " ";
            }
            else
            {
                cout << sm[upper_bound(a.begin(), a.end(), temp) - a.begin() - 1] << " ";
            }
        }
        cout << "\n";
    }
}