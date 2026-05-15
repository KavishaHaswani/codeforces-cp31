#include <bits/stdc++.h>

using namespace std;

int helper(int n)
{
    int ans = 0, p = 1;
    while (p <= n)
    {
        ans++;
        p *= 2;
    }
    return ans - 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(32, 0);
        for (int i = 0, temp; i < n; i++)
        {
            cin >> temp;
            a[helper(temp)]++;
        }
        long long ans = 0;
        for (int i : a)
        {
            ans += (long long)i * (i - 1) / 2;
        }
        cout << ans << endl;
    }
}