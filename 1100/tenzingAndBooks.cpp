#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, cur = 0;
        cin >> n >> x;
        vector<vector<int>> a(3, vector<int>(n));
        for (auto &i: a) {
            for (auto &j: i) {
                cin >> j;
            }
        }
        for (const auto &i: a) {
            for (const auto &j: i) {
                if ((x | j) != x) {
                    break;
                }
                cur = cur | j;
                if (cur == x) {break;}
            }
        }
        if (cur == x) {cout << "Yes\n";}
        else {cout << "No\n";}
    }
}