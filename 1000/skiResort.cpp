#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q, a, cur = 0;
        long long ans = 0;
        cin >> n >> k >> q;
        while (n--)
        {
            cin >> a;
            if (a <= q)
            {
                cur++;
                if (cur >= k)
                {
                    ans += 1 + cur - k;
                }
            }
            else
            {
                cur = 0;
            }
        }
        cout << ans << endl;
    }
}