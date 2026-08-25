#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int c[2] = {0, 0};
    for (auto i : s)
    {
        c[i == '+' ? 0 : 1]++;
    }
    if (c[0] > c[1])
    {
        swap(c[0], c[1]);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }

        if (c[0] == c[1])
        {
            cout << "YES\n";
            continue;
        }
        if (a == b && a != 0)
        {
            cout << "NO\n";
            continue;
        }

        long long lcm = 1ll * a * b / __gcd(a, b);
        int x = lcm / a, y = lcm / b;
        if ((c[1] - c[0]) % (x - y) == 0 &&
            1ll * c[0] >= 1ll * y * (c[1] - c[0]) / (x - y))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
