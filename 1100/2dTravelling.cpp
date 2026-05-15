#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<pair<int, int>> cityCords(n);
        for (int i = 0; i < n; i++)
        {
            cin >> cityCords[i].first >> cityCords[i].second;
        }
        long long startToMajor = 4000000000, MajorToFinish = 4000000000;
        for (int i = 0; i < k; i++)
        {
            startToMajor = min(startToMajor, 1ll * abs(1ll * cityCords[i].first - cityCords[a - 1].first) + abs(1ll * cityCords[i].second - cityCords[a - 1].second));
            MajorToFinish = min(MajorToFinish, 1ll * abs(1ll * cityCords[i].first - cityCords[b - 1].first) + abs(1ll * cityCords[i].second - cityCords[b - 1].second));
        }
        long long direct = 1ll * abs(1ll * cityCords[a - 1].first - cityCords[b - 1].first) + abs(1ll * cityCords[a - 1].second - cityCords[b - 1].second);
        cout << min(direct, startToMajor + MajorToFinish) << endl;
    }
}