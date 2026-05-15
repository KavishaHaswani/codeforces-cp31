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
        int h;
        bool flag = true;
        cin >> a[0];
        h = a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (flag && a[i] != a[0])
            {
                h = i + 1;
                flag = false;
            }
        }
        if (flag)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for (int i = 1; i < n; i++)
            {
                cout << i + 1 << " " << (a[i] == a[0] ? h : 1) << "\n";
            }
        }
    }
}