#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<int> nums = {4, 8, 15, 16, 23, 42};
    vector<pair<int, int>> pairs, queries = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    for (auto i : queries)
    {
        cout << "? " << i.first << " " << i.second << endl;
        fflush(stdout);
        int mul;
        cin >> mul;
        for (auto i : nums)
        {
            if (mul % i == 0 && nums.find(mul / i) != nums.end())
            {
                pairs.push_back({i, mul / i});
                break;
            }
        }
    }
    cout << "! ";
    for (int i = 0; i < 3; i += 2)
    {
        if (pairs[i].first == pairs[i + 1].first || pairs[i].first == pairs[i + 1].second)
        {
            swap(pairs[i].first, pairs[i].second);
        }
        cout << to_string(pairs[i].first) << " " << to_string(pairs[i].second) << " ";
        nums.erase(pairs[i].first);
        nums.erase(pairs[i].second);
    }
    if (pairs[3].second == pairs[2].second)
    {
        swap(pairs[3].first, pairs[3].second);
    }
    cout << pairs[3].second << " ";
    nums.erase(pairs[3].second);
    cout << *nums.begin() << endl;
    fflush(stdout);
}
