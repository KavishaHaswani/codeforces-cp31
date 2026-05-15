#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a[2];
        cin >> a[0] >> a[1];
        int trailingZeroCount[2] = {0, 0};
        for (int i = 0; i < 2; i++)
        {
            while (a[i] > 0 && a[i] % 2 == 0)
            {
                trailingZeroCount[i]++;
                a[i] /= 2;
            }
        }
        cout << (a[0] == a[1] ? ceil(1.0 * abs(trailingZeroCount[1] - trailingZeroCount[0]) / 3) : -1) << endl;
    }
}