#include <iostream>

using namespace std;

int gcd(int l, int s)
{
    if (l % s == 0)
    {
        return s;
    }
    return gcd(s, l % s);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, ans = 0, i = 0;
        cin >> n;
        while (ans == 0)
        {
            cin >> p;
            ans = abs(i + 1 - p);
            i++;
        }
        for (; i < n; i++)
        {
            cin >> p;
            if (p != i + 1)
            {
                ans = gcd(ans, abs(i + 1 - p));
            }
        }
        cout << ans << endl;
    }
}