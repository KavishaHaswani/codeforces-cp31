#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, ans = 0, used = 0;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += i + 1;
        }
        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++)
        {
            if (used + a[i] > c)
            {
                break;
            }
            used += a[i];
            ans++;
        }
        cout << ans << endl;
    }
}