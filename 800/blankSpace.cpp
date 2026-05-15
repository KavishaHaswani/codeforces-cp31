#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, ans = 0, cur = 0;
        cin >> n;
        while (n--)
        {
            cin >> a;
            if (!a)
            {
                cur++;
                ans = max(ans, cur);
            }
            else
            {
                cur = 0;
            }
        }

        cout << ans << endl;
    }
}