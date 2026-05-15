#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        vector<int> a(n);
        cin >> a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            ans = max(ans, a[i - 1] - a[i]);
        }
        ans = max(ans, a[n - 1] - a[0]);
        for (int i = 1; i < n - 1; i++)
        {
            ans = max(ans, a[n - 1] - a[i]);
            ans = max(ans, a[i] - a[0]);
        }
        cout << ans << endl;
    }
}