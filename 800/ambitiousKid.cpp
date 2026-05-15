#include <iostream>

using namespace std;

int main() {
    int n, a, mini{100000};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        mini = min(mini, abs(a));
    }
    cout << mini << endl;
}