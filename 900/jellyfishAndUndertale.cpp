#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> x(n);
        long long ans = b;
        for (int i = 0; i < n; i++) {
            cin >> b;
            ans += min(b, a - 1);
        }
        cout << ans << endl;
    }
}