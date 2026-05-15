#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        if (b * k + n * (k - 1) < s || b * k > s)
        {
            cout << -1 << endl;
            continue;
        }
        cout << min(b * k + k - 1, s) << " ";
        s -= min(b * k + k - 1, s);
        n--;
        while (s)
        {
            cout << min(k - 1, s) << " ";
            s -= min(k - 1, s);
            n--;
        }
        while (n)
        {
            cout << 0 << " ";
            n--;
        }
        cout << endl;
    }
}