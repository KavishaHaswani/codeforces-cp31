#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, min = 31;
        cin >> a >> b;
        int cur = max(2, b) - b;
        for (int i = b + cur; cur < min; cur = ++i - b)
        {
            for (int d = a; d > 0; d /= i)
            {
                cur++;
            }
            if (cur < min)
            {
                min = cur;
            }
        }
        cout << min << endl;
    }
}