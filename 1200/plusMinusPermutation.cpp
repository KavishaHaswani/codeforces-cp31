#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;

        long long d = __gcd(x, y);
        d = (x / d) * (y / d) * d;

        long long a = (n / x) - (n / d), l = n;
        a = l - a + 1;
        long long ad = (a <= l ? (l - a + 1) * (a + l) / 2 : 0);

        a = 1, l = (n / y) - (n / d);
        long long sb = (a <= l ? (l - a + 1) * (a + l) / 2 : 0);

        cout << ad - sb << endl;
    }
}