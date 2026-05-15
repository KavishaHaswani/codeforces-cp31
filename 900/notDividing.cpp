#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> b;
        if (b == 1)
        {
            b++;
        }
        cout << b << " ";
        for (int i = 1; i < n; i++)
        {
            a = b;
            cin >> b;
            if (b == 1)
            {
                b++;
            }
            if (b % a == 0)
            {
                b++;
            }
            cout << b << " ";
        }
        cout << endl;
    }
}