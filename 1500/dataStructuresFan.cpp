#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    s.insert(s.begin(), '*');

    int x0 = 0, x1 = 0;
    vector<int> preXor(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        preXor[i] = preXor[i - 1] ^ a[i];
        if (s[i] == '0')
        {
            x0 ^= a[i];
        }
        else
        {
            x1 ^= a[i];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int tp;
        cin >> tp;
        if (tp == 1)
        {
            int l, r;
            cin >> l >> r;
            int xorlr = preXor[r] ^ preXor[l - 1];
            x0 ^= xorlr;
            x1 ^= xorlr;
        }
        else
        {
            int g;
            cin >> g;
            cout << (g ? x1 : x0) << " ";
        }
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