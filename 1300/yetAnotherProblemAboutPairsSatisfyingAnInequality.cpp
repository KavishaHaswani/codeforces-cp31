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

        long long count = 0, ans = 0;
        vector<int> a(n + 1);
        a[0] = 0;
        for (int i = 1, temp; i <= n; i++)
        {
            cin >> temp;
            if (temp < i)
            {
                count++;
            }
            if (temp < i && temp)
            {
                ans += (long long)a[temp - 1];
                // cout << i << " " << ans << endl;
            }
            a[i] = count;
        }
        cout << ans << endl;
    }
}