#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, gcd, moves;
        cin >> a >> b;
        gcd = abs(a - b);
        if (gcd == 0 || a % gcd == 0)
        {
            moves = 0;
        }
        else
        {
            moves = min(b % gcd, gcd - b % gcd);
        }
        cout << gcd << " " << moves << endl;
    }
}