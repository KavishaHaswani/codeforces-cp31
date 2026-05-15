#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a == k) {flag = true;}
        }
        if (flag) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
}