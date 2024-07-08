#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;

template<class T>
void pintff(const vector<T>& v) {
    for (const auto& k : v) {
        cout << k << endl;
    }
}

void read(vector<int>& v, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

unordered_map<char, int> m, h;
vector<string> out;

void SAIF() {
    m.clear();
    h.clear();
    string s, f;
    cin >> s >> f;
    for (char k : s) {
        m[k]++;
    }
    for (char j : f) {
        h[j]++;
    }

    for (auto r : h) {
        if (m[r.first] != r.second) {
            out.push_back("NO");
            return;
        }
    }

    int count = 0;
    pair<char, char> p = {'\0', '\0'};
    bool flag = true;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != f[i]) {
            count++;
            if (count > 2) {
                flag = false;
                break;
            } else if (count == 1) {
                p.first = s[i];
                p.second = f[i];
            } else if (count == 2) {
                if (p.first != f[i] || p.second != s[i]) {
                    flag = false;
                    break;
                }
            }
        }
    }

    if (flag && count == 2) {
        out.push_back("YES");
    } else {
        out.push_back("NO");
    }
}

int main() {
    SAIFf
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(out);
    return 0;
}
