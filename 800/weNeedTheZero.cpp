#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            x = x ^ a;
        }

        if (x != 0 && !(n % 2))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
}
