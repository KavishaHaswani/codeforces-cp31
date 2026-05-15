#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                count++;
            }
        }
        if (!(count % 2))
        {
            count = count / 2;
            int i = 0;
            while (i < n && count)
            {
                if (a[i] == 2)
                {
                    count--;
                }
                i++;
            }
            cout << (i == 0 ? 1 : i) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}