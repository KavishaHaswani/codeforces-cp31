#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0, curOpen = 0;
        string s;
        cin >> n >> s;
        for (char c : s)
        {
            if (c == ')')
            {
                if (curOpen == 0)
                {
                    ans++;
                }
                else
                {
                    curOpen--;
                }
            }
            if (c == '(')
            {
                curOpen++;
            }
        }
        cout << ans << endl;
    }
}