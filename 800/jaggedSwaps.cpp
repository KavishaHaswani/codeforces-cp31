#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for (int i = 0; i < n; i++) {std::cin >> arr[i];}
        if (arr[0] == 1) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
}