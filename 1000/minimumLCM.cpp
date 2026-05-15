#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a = 1, n, s;
        cin >> n;
        s = sqrt(n) + 1;
        for (int i = 2; i <= s ; i++)
        {
            if (n % i == 0) {
                a = n / i;
                break;
            }
        }
        cout << a << " " << n - a << endl;
    }
}