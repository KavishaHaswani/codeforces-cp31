#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n, a, b;
    cin >> t;
    while (t--) {
        vector<int> ans;
        cin >> n >> b;
        for (int i = 1; i < n; i++) {
            a = b;
            cin >> b;
            ans.push_back(a);
            if (a > b) {ans.push_back(b);}
        }
        ans.push_back(b);
        cout << ans.size() << endl;
        for (int i: ans) {
            cout << i << " ";
        }
        cout << endl;
    }
}