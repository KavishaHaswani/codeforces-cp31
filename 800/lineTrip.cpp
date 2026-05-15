#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, x;
        std::cin >> n >> x;
        int l = 0, h, ans = 0;
        for (int i = 0; i < n; i++) {
            std::cin >> h;
            ans = std::max(ans, h - l);
            l = h;
        }
        ans = std::max(ans, 2 * (x - l));
        std::cout << ans << std::endl;
    }
}