#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> x(n);
        for (auto &i : x)
        {
            cin >> i;
        }
        x.insert(x.begin(), 0);

        long long sum = 0, ans = 1ll * b * x[n] + 1ll * a * x[n - 1];
        int i, j;
        for (i = n - 1; i > 0; i--)
        {
            sum += (x[i] - x[i - 1]) * (n - i);
            long long cur = 1ll * b * (x[n] + sum) + 1ll * a * x[i - 1];
            if (ans <= cur)
            {
                break;
            }
            ans = cur;
        }

        cout << ans << endl;
    }
}
