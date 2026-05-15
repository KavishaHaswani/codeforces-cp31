#include <iostream>
#include <queue>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, a;
        cin >> n >> k;
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a % k == 0) {cout << i + 1 << " ";}
            else {pq.push({a % k, n - i});}
        }
        while (!pq.empty()) {
            auto t = pq.top(); pq.pop();
            cout << n - t.second + 1 << " ";
        }
        cout << endl;
    }
}