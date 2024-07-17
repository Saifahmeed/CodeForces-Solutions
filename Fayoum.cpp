#include <bits/stdc++.h>
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;

vector<ll> out;

void SAIF() {
    string blank_line, s, t;
    getline(cin, blank_line);
    getline(cin, s);
    getline(cin, t);

    int i = 0, j = 0, count = 0;
    bool flag = false;

    while (j < s.size()) {
        if (flag) {
            if (s[j] == t[i]) {
                if (i == t.size() - 1) {
                    count++;
                    i = 0;
                    flag = false;
                }
                else {
                    i++;
                }
            }
            else {
                flag = false;
                i = 0;
            }
        }
        else {
            if (s[j] == t[0]) {
                if (t.size() == 1) {
                    count++;
                }
                else {
                    flag = true;
                    i++;
                }
            }
        }
        j++;
    }
    out.push_back(count);
}

int main() {
    SAIFf;
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        SAIF();
    }
    for (const auto& result : out) {
        cout << result << "\n";
    }
    return 0;
}

