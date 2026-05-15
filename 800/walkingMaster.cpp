#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, ans = 0;
        cin >> a >> b >> c >> d;

        if ((c > a + d - b) || (d < b))
        {
            cout << -1 << endl;
            continue;
        }

        if (d > b)
        {
            ans += d - b;
        }
        if (c < a + ans)
        {
            ans += a + ans - c;
        }
        
        cout << ans << endl;
    }
}