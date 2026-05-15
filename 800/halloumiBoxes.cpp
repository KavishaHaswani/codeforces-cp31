#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> arr(n);
        for (int i = 0; i < n; i++) {std::cin >> arr[i];}
        if (k > 1) {
            std::cout << "YES\n";
            continue;
        }
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                std::cout << "NO\n";
                flag = false;
                break;
            }
        }
        if (flag) {std::cout << "YES\n";}
    }
}