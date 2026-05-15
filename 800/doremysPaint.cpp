#include <iostream>
#include <unordered_map>

using namespace std;

string result(unordered_map<int, int> &count, int n) {
    if (count.size() > 2) {
        return "No";
    }
    n = n / 2 + (n % 2? 1: 0);
    bool flag = true;
    for (auto i: count) {
        if (i.second > n) {
            flag = false;
            break;
        } 
    }
    if (count.size() == 1 || flag) {
        return "Yes";
    }
    return "No";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int temp;
        unordered_map<int, int> count;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            count[temp]++;
        }
        cout << result(count, n) << endl;
    }
}