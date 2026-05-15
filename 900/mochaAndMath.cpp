#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, ans;
        cin >> n >> ans;
        for (int i = 1; i < n; i++)
        {
            cin >> a;
            ans = ans & a;
        }
        cout << ans << endl;
    }
}