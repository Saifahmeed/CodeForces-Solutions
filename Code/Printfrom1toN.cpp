#include <bits/stdc++.h>
using namespace std;
string rec(int n, string m) {
    if (n == 0) return m;
    if (!m.empty()) m = " " + m;
    m = to_string(n % 10) + m;
    return rec(n / 10, m);
}


int main() {
    vector<string> out;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 0) {
            out.push_back("");
        } else {
            out.push_back(rec(n, ""));
        }
    }
    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << endl;
    }
    return 0;
}
