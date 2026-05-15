#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long m = 1000000007;
        long long ans = 1;
        for (int i = 0; i < k; i++)
        {
            ans = (ans * n) % m;
        }
        cout << ans << endl;
    }
    return 0;
}