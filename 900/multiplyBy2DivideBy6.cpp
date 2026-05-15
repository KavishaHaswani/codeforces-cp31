#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f2 = 0, f3 = 0;
        cin >> n;
        while (n > 1 && n % 3 == 0)
        {
            f3++;
            n = n / 3;
        }
        while (n > 1 && n % 2 == 0)
        {
            f2++;
            n = n / 2;
        }
        if (n > 1 || f2 > f3)
        {
            cout << -1 << endl;
            continue;
        }
        cout << f3 - f2 + f3 << endl;
    }
}