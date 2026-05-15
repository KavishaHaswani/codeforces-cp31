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
        int n, k, ans = 1, cur = 1;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > k)
            {
                cur = 1;
            }
            else
            {
                cur++;
                ans = max(ans, cur);
            }
        }
        cout << n - ans << endl;
    }
}