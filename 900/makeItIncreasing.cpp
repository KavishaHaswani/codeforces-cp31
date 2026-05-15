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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        bool flag = true;
        for (int i = n - 2; i > -1; i--)
        {
            while (a[i] >= a[i + 1] && a[i] != 0)
            {
                a[i] /= 2;
                ans++;
            }
            if (a[i] >= a[i + 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}