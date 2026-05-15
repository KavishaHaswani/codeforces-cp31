#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, ans = 1;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            if (n % i != 0)
            {
                break;
            }
            ans++;
        }
        cout << ans << endl;
    }
}