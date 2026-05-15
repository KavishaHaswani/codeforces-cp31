#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = -1;
    }

    int gVal = 0, gTime = -1;
    long long sum = accumulate(a.begin(), a.end(), 0ll, [](long long x, pair<int, int> y)
                               { return x + y.first; });
    for (int i = 0, t, pos, x; i < q; i++)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> pos;
        }
        cin >> x;

        if (t == 1)
        {
            if (a[pos - 1].second < gTime)
            {
                sum = sum - gVal + x;
                a[pos - 1] = {x, i};
            }
            else
            {
                sum = sum - a[pos - 1].first + x;
                a[pos - 1] = {x, i};
            }
        }
        else
        {
            gVal = x, gTime = i;
            sum = (long long)x * n;
        }
        cout << sum << endl;
    }
}