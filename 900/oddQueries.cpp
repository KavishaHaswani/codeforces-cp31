#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n + 1);
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] = (a[i] + a[i - 1]) % 2;
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            if ((a[n] - (a[r] - a[l - 1]) + (r - l + 1) * (k % 2)) % 2 != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}