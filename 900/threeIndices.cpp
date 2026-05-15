#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        int left = 0, right = n - 1, i = n;
        while (left < right)
        {
            if (p[left] == n)
            {
                n--;
                left++;
                continue;
            }
            else if (p[right] == n)
            {
                n--;
                right--;
                continue;
            }
            cout << "YES" << endl;
            int temp = max(p[left], p[right]);
            for (int i = left + 1; i < right; i++)
            {
                if (p[i] > temp)
                {
                    cout << left + 1 << " " << i + 1 << " " << right + 1 << endl;
                    break;
                }
            }
            break;
        }
        if (left == right)
        {
            cout << "NO" << endl;
        }
    }
}