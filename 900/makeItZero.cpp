#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0, a;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            x = x ^ a;
        }
        if (x == 0)
        {
            cout << 1 << endl
                 << "1 " << n << endl;
        }
        else if (n % 2 == 0)
        {
            cout << 2 << endl
                 << "1 " << n << endl
                 << "1 " << n << endl;
        }
        else
        {
            cout << 4 << endl
                 << "1 " << n - 1 << endl
                 << "1 " << n - 1 << endl
                 << n - 1 << " " << n << endl
                 << n - 1 << " " << n << endl;
        }
    }
}