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
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        if (min(z, o) % 2 == 1)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
    }
}