#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p = 1;
        cin >> n;
        while (p < n)
        {
            p *= 2;
        }
        p /= 2;
        for (int i = p - 1; i > -1; i--)
        {
            cout << i << " ";
        }
        for (int i = p; i < n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}