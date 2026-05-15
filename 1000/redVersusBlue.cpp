#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        for (int i = r % (b + 1); i > 0; i--)
        {
            for (int j = ceil(1.0 * r / (b + 1)); j > 0; j--)
            {
                cout << 'R';
            }
            cout << 'B';
        }
        for (int i = b + 1 - r % (b + 1); i > 0; i--)
        {
            for (int j = r / (b + 1); j > 0; j--)
            {
                cout << 'R';
            }
            if (i != 1)
            {
                cout << 'B';
            }
        }
        cout << endl;
    }
}