#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        int a, sum = 0;
        for (int i = 1; i < n; i++) {
            cin >> a;
            sum += a;
        }
        cout << -sum << endl;
    }
}