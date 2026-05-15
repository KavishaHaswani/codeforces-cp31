#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n * k);
        for (int i = 0; i < n * k; i++)
        {
            cin >> a[i];
        }
        int d = ceil(1.0 * n / 2), i = k * (d - 1);
        if (n % 2 == 0)
        {
            d++;
        }
        long long ans = 0;
        for (; i < n * k; i += d)
        {
            ans += a[i];
        }
        cout << ans << endl;
    }
}