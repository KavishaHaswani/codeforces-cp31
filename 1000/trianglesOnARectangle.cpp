#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h;
        long long ans = 0;
        cin >> w >> h;
        vector<int> mul = {h, h, w, w};
        for (int i = 0; i < 4; i++)
        {
            int k, a, mini = 1000001, maxi = 0;
            cin >> k;
            while (k--)
            {
                cin >> a;
                mini = min(mini, a);
                maxi = max(maxi, a);
            }
            ans = max(ans, (long long)(maxi - mini) * mul[i]);
        }
        cout << ans << endl;
    }
}