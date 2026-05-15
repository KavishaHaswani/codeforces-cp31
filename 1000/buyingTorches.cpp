#include <cmath>
#include <iostream>

using namespace std;

long long ceil_division(long long a, long long b)
{
    return (a - 1) / b + 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;
        cout << ceil_division(y * k + k - 1, x - 1) + k << endl;
    }
}