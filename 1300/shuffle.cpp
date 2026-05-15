#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, m;
        cin >> n >> x >> m;
        int i = x, j = x;
        while (m--) {
            int l, r;
            cin >> l >> r;
            if ((l <= i && r >= i) || (l <= j && r >= j) || (l >= i && r <= j)) {
                i = min(i, l);
                j = max(j, r);
            }
        }
        cout << j - i + 1 << endl;
    }
}