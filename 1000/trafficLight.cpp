#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        if (c == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        if (s.back() != 'g')
        {
            s += s.substr(0, s.find('g') + 1);
            n = s.size();
        }
        int ans = 0;
        for (int i = n - 2, g = n - 1; i > -1; i--)
        {
            if (s[i] == c)
            {
                ans = max(ans, g - i);
            }
            if (s[i] == 'g')
            {
                g = i;
            }
        }
        cout << ans << endl;
    }
}