#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int c2 = 0, c5 = 0;

        for (int i = n; i % 2 == 0; i /= 2) {c2++;}
        for (int i = n; i % 5 == 0; i /= 5) {c5++;}
        int temp = min(c2, c5);
        c2 -= temp, c5 -= temp;

        int k = 1;
        for (int i = c5; i && k * 2 <= m; i--, k *= 2) ;
        for (int i = c2; i && k * 5 <= m; i--, k *= 5) ;
        while (1ll * k * 10 <= m) {
            k *= 10;
        }
        k = m - m % k;

        cout << 1ll * n * k << endl;
    }
}