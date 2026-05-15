#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        a += c / 2 + c % 2;
        b += c / 2;
        if (a > b) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }
}