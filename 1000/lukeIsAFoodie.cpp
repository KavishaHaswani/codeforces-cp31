#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, a, mini = 1000000001, maxi = 0, v, ans = 0;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mini = min(mini, a);
            maxi = max(maxi, a);
            v = maxi - (maxi + mini) / 2;
            if (v > x)
            {
                ans++;
                maxi = a;
                mini = a;
            }
        }
        cout << ans << endl;
    }
}