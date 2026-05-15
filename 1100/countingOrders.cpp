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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &i : a)
        {
            cin >> i;
        }
        for (int &j : b)
        {
            cin >> j;
        }

        int m = 1000000007;
        long long ans = 1;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 0, j = 0; i < n; i++)
        {
            while (j < n && b[j] < a[i])
            {
                j++;
            }
            ans = (ans * (j - i)) % m;
        }
        cout << ans << endl;
    }
}