#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n % k)
        {
            cout << 1 << endl
                 << n << endl;
        }
        else
        {
            cout << 2 << endl
                 << 1 << " " << n - 1 << endl;
        }
    }
}