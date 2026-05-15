#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + 2 * (b - a) > 0 && (a + 2 * (b - a)) % c == 0) ||
            (c - 2 * (c - b) > 0 && (c - 2 * (c - b)) % a == 0) ||
            ((c - a) % 2 == 0 && (a + (c - a) / 2) % b == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}