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
        int n, k; // no of elements, operations
        cin >> n >> k;
        vector<long long> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        sort(a.begin(), a.end());
        for (int i = 1; i < n; i++)
        {
            a[i] += a[i - 1];
        }

        long long ans = a[n - k - 1];
        for (int l = 1, r = n - k; r < n; l += 2, r++)
        {
            ans = max(ans, a[r] - a[l]);
        }
        cout << ans << endl;
    }
}