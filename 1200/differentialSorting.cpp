#include <bits/stdc++.h>

using namespace std;

void helper(vector<long long> &a, int n)
{
    if (is_sorted(a.begin(), a.end()))
    {
        cout << 0 << endl;
        return;
    }

    if (a[n - 1] < a[n - 2] || a[n - 1] < 0)
    {
        cout << -1 << endl;
        return;
    }

    cout << n - 2 << endl;
    for (int i = n - 2; i > 0; i--)
    {
        cout << i << " " << n - 1 << " " << n << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        helper(a, n);
    }
}