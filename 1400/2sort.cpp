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
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        int ans = 0;
        for (int i = 1, size = 1; i < n; i++)
        {
            if (a[i - 1] < a[i] * 2)
            {
                size++;
            }
            else
            {
                size = 1;
            }
            if (size > k)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
