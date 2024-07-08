#include <bits/stdc++.h>
using namespace std;
string rec(int n, string m) {
    if (n == 0) return m;
    m = to_string(n % 2) + m;
    return rec(n / 2, m);
}


int main() {
    vector<string> out;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 0) {
            out.push_back("0");
        } else {
            string x=rec(n, "");
            char k='1';
            for (char m: x){
                if(m==k)break;
                else x.erase(m);
            }
            out.push_back(x);
        }
    }
    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << endl;
    }
    return 0;
}
