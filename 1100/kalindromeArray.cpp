#include <bits/stdc++.h>

using namespace std;

bool helper(const vector<int> &a, int l, int r, int x)
{
    while (l < r)
    {
        if (a[l] == x)
        {
            l++;
        }
        else if (a[r] == x)
        {
            r--;
        }
        else if (a[l] != a[r])
        {
            return false;
        }
        else {
            l++, r--;
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

        int l = 0, r = n - 1;
        while (l < r && a[l] == a[r])
        {
            l++, r--;
        }

        bool flag = true;
        if (l < r)
        {
            flag = helper(a, l, r, a[l]) || helper(a, l, r, a[r]);
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}