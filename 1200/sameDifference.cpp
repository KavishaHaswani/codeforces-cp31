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
        map<int, int> a;
        long long ans = 0;
        for (int i = 1, t; i <= n; i++)
        {
            cin >> t;
            ans += (long long)a[t - i];
            a[t - i]++;
        }
        cout << ans << endl;
    }
    return 0;
}