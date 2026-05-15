#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        if (n % 3 == 0 || n % 2 == 2) {std::cout << "Second\n";}
        else {std::cout << "First\n";}
    }
}