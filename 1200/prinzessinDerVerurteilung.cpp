#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        unordered_set<string> st;
        vector<string> old(1, "");
        st.insert(string(""));
        bool flag = true;
        for (int l = 1; l <= n && flag; l++) {
            for (int i = 0; i <= n - l; i++) {
                st.insert(s.substr(i, l));
            }
            vector<string> nw;
            for (string cur: old) {
                for (char c = 'a'; c <= 'z' && flag; c++) {
                    nw.push_back(cur + c);
                    if (!st.count(nw.back())) {
                        cout << nw.back() << endl;
                        flag = false;
                    }
                }
                if (!flag) {break;}
            }
            old = nw;
        }
    }
}