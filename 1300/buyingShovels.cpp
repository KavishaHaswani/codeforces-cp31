#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = n;
        for (int i = min((int)sqrt(n), k); i > 0; i--) {
            if (n % i == 0) {
                if (n / i <= k && n / i > i) {
                    ans = min(ans, n / (n / i));
                } else {
                    ans = min(ans, n / i);
                }
            }
        }
        cout << ans << endl;
    }
}