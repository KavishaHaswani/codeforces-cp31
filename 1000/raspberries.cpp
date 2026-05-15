#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a, even = 0, d = 6;
        cin >> n >> k;
        while (n--)
        {
            cin >> a;
            d = min(d, (a % k == 0 ? 0 : k - a % k));
            if (a % 2 == 0)
            {
                even++;
            }
        }
        cout << (k == 4 ? min(d, max(0, 2 - even)) : d) << endl;
    }
}