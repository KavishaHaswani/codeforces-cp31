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

        int ans = 1;
        for (int i = sqrt(n); i > 1; i--)
        {
            if (n % i == 0)
            {
                ans =  max(ans, max(i, n / i));
            }
        }
        cout << ans << " " << n - ans << endl;
    }
}