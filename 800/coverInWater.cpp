#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        std::vector<char> arr(s.begin(), s.end());
        bool flag = false;
        int empty = 0 + (arr[0] == '.'? 1: 0) + (arr.size() > 1 && arr[1] == '.'? 1: 0);
        for (int i = 2; i < n && !flag; i++) {
            if (arr[i] == '.') {
                empty++;
                if (arr[i - 1] == '.' && arr[i - 2] == '.') {
                    flag = true;
                    std::cout << 2 << std::endl;
                }
            }
        }
        if (!flag) {std::cout << empty << std::endl;}
    }
}