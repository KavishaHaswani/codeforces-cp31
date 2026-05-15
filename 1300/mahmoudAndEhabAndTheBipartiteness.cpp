#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    for (int i = 1, u, v; i < n; i++) {
        cin >> u >> v;
        a[u - 1].push_back(v - 1);
        a[v - 1].push_back(u - 1);
    }
    vector<int> visited(n, false);
    queue<int> q;
    q.push(0);
    visited[0] = true;
    bool isG2 = false;
    int G[] = {0, 0};
    while (!q.empty()) {
        int s = q.size();
        G[isG2] += s;
        isG2 = !isG2;
        while (s--) {
            // cout << q.front() << endl;
            for (auto i: a[q.front()]) {
                if (visited[i]) {continue;}
                visited[i] = true;
                q.push(i);
            }
            q.pop();
        }
    }
    cout << (long long)G[0] * G[1] - n + 1 << endl;
}