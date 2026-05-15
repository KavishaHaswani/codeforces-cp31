#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n % 2 != 0 || n < 4)
        {
            cout << -1 << endl;
        }
        else
        {
            long long a = n / 6, b = n / 4;
            cout << (a == 0 ? b : (n % 6 == 0? a: a + 1)) << " "
                 << (b == 0 ? a : b) << endl;
        }
    }
}