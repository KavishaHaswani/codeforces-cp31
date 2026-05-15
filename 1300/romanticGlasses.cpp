#include <bits/stdc++.h>
using namespace std;

bool helper(vector<int> &a, int n)
{
    set<long long> diff;
    long long d = 0;
    for (int i = 0; i < n; i++)
    {
        d += (i % 2 ? -a[i] : a[i]);
        if (diff.count(d) || d == 0)
        {
            return true;
        }
        diff.insert(d);
    }
    return false;
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
        cout << (helper(a, n) ? "YES\n" : "NO\n");
    }
}