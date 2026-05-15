#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n + 1);
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }

        long long ans = 0;
        for (int k = 1; k <= n / 2; k++)
        {
            if (n % k != 0)
            {
                continue;
            }
            long long maxi = 0, mini = 200000000000000, cur;
            for (int i = 0; i < n; i += k)
            {
                cur = a[i + k] - a[i];
                maxi = max(maxi, cur);
                mini = min(mini, cur);
            }
            ans = max(ans, maxi - mini);
        }
        cout << ans << endl;
    }
}