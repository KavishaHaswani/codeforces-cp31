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
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }

        for (auto i : a)
        {
            x = (x + i) % 2;
        }

        if (x == y % 2)
        {
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
        }
    }
}
