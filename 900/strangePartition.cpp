#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, a;
        long long maxi = 0, mini = 0;
        cin >> n >> x;
        while (n--)
        {
            cin >> a;
            maxi += ceil(1.0 * a / x);
            mini += a;
        }
        mini = ceil(1.0 * mini / x);
        cout << mini << " " << maxi << endl;
    }
}