#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int left = 0, right = n - 1;
        while (left < right)
        {
            if (s[left] == s[right])
            {
                break;
            }
            left++;
            right--;
        }
        cout << right - left + 1 << endl;
    }
}