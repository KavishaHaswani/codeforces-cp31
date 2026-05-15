#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int limit = 999999;
    vector<int> roundNumbers;
    for (int i = 9, j = 1; i <= limit; i = i * 10 + 9, j *= 10)
    {
        for (int k = j; k <= i; k += j)
        {
            roundNumbers.push_back(k);
        }
    }
    int r = roundNumbers.size();

    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        for (int i = 0; i < r && roundNumbers[i] <= n; i++)
        {
            ans++;
        }
        cout << ans << endl;
    }
}