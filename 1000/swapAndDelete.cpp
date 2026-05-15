#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int z = 0, o = 0;
        for (char c : s)
        {
            if (c == '0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        int i = 0;
        while (i < s.size())
        {
            if (s[i] == '0')
            {
                if (!o)
                {
                    break;
                }
                o--;
            }
            else
            {
                if (!z)
                {
                    break;
                }
                z--;
            }
            i++;
        }
        cout << s.size() - i << endl;
    }
}