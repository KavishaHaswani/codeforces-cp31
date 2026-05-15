#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, z = 0, o = 0;
        cin >> n;
        while (n--)
        {
            cin >> a;
            if (a == 0)
            {
                z++;
            }
            else if (a == 1)
            {
                o++;
            }
        }
        cout << (long long)(o * pow(2, z)) << endl;
    }
}