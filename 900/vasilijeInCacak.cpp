#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        long long min = (k + 1) * k / 2, max = (n + n - k + 1) * k / 2;
        if (min <= x && max >= x)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}