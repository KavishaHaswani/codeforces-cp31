#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, mini = INT_MAX;
        cin >> n >> b;
        for (int i = 1; i < n; i++)
        {
            a = b;
            cin >> b;
            if (a > b)
            {
                mini = 0;
            }
            else
            {
                a = b - a + 1;
                mini = min(mini, a / 2 + a % 2);
            }
        }
        cout << mini << endl;
    }
}