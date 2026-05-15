#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        vector<bool> t(3, false);
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a != 0)
            {
                t[0] = true;
                if (t[1])
                {
                    t[2] = true;
                }
            }
            else if (t[0])
            {
                t[1] = true;
            }
        }
        if (t[2])
        {
            cout << 2 << endl;
        }
        else if (!t[0])
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}