#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl
                 << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            if (k == 1 || (n % 2 && (k < 3 || n < 3)))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl
                     << n / 2 << endl;
                if (n % 2)
                {
                    cout << 3 << " ";
                    n -= 3;
                }
                while (n)
                {
                    cout << 2 << " ";
                    n -= 2;
                }
                cout << endl;
            }
        }
    }
}