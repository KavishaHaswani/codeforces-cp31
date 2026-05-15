#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = 0, mod = 1000000007;
        ans += n * (n + 1) % mod * (2 * n + 1) % mod * 2022 / 6 % mod;
        ans += (n - 1) * n % mod * (n + 1) % mod * 2022 / 3 % mod;
        ans %= mod;
        cout << ans << endl;
    }
}