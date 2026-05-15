#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n;
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            cin >> s;
            mp[s].push_back(i);
        }
        vector<int> ans(n);
        for (auto i: mp) {
            int m = i.second.size();
            if (m < 2) {
                ans = {-1};
                break;
            }
            for (int j = 0; j < m; j++) {
                ans[i.second[j]] = i.second[(j + 1) % m] + 1;
            }
        }
        for (int i: ans) {
            cout << i << " ";
        }
        cout << endl;
    }
}