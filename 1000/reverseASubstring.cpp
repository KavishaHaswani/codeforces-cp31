#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (s[i] < s[i - 1])
        {
            cout << "YES" << endl
                 << i << " " << i + 1 << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << "NO";
    }
}