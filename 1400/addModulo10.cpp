#include <bits/stdc++.h>

using namespace std;

bool solve(vector<int> &a, int n)
{
    int z = 0, t = 0;
    int zi = -1, ti = -1;
    for (int i = 0; i < n; i++)
    {
        while (a[i] % 10 != 0 && a[i] % 10 != 2)
        {
            a[i] = a[i] + a[i] % 10;
        }
        if (a[i] % 10 == 0)
        {
            z++;
            if (zi == -1)
            {
                zi = a[i];
            }
            if (zi != a[i])
            {
                return false;
            }
        }
        else
        {
            t++;
            if (ti == -1)
            {
                ti = a[i];
            }
            if (abs(a[i] - ti) % 20 != 0)
            {
                return false;
            }
        }
        if (z && t)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i : a)
        {
            cin >> i;
        }

        if (solve(a, n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}