#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, oddCount = 0;
        cin >> n;
        for (int i = 0, t; i < n; i++)
        {
            cin >> t;
            if (t % 2)
            {
                oddCount++;
            }
        }
        if (oddCount % 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}