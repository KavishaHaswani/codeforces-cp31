#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n + 1), b(n + 1), mul(n + 1, 0), add(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        b[i] += b[i - 1];
    }

    for (int i = 1; i <= n; i++)
    {
        mul[i] += 1;
        auto lb = lower_bound(b.begin() + i, b.end(), a[i] + b[i - 1]);
        if (lb == b.end())
        {
            continue;
        }
        if (*lb == a[i] + b[i - 1] && lb - b.begin() + 1 <= n)
        {
            mul[lb - b.begin() + 1] += -1;
        }
        else if (*lb > a[i] + b[i - 1])
        {
            mul[lb - b.begin()] += -1;
            add[lb - b.begin()] += a[i] + b[i - 1] - *(lb - 1);
        }
    }

    for (int i = 1, m = 0; i <= n; i++)
    {
        m += mul[i];
        cout << m * (b[i] - b[i - 1]) + add[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
