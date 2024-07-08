#include <bits/stdc++.h>
using namespace std;

bool Vali(const string &s) {
    string let, num;
    bool foundchar = false;
    for (char c : s) {
        if (islower(c)) {
            let.push_back(c);
            foundchar = true;
        } else if (isdigit(c)) {
            if (foundchar) {
                return false; 
            }
            num.push_back(c);
        } else {
            return false; 
        }
    }
    if (!is_sorted(num.begin(), num.end())) {
        return false;}
    if (!is_sorted(let.begin(), let.end())) {
        return false;}
    return true;
}
int main() {
    int t, n;
    cin >> t;
    vector<string> out;
    while (t--) {
        cin >> n;
        string s;
        cin >> s;
        if (Vali(s)) {
            out.push_back("YES");
        } else {
            out.push_back("NO");
        }
    }
    for (const string &output : out) {
        cout << output << endl;
    }
    return 0;
}
