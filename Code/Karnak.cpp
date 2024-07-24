#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;
vector<char> alph = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
template<class T>
void pintff(const vector<T>& v) {
    for (const auto& k : v) {
        cout << k << endl;
    }
}

vector<string> out;

void SAIF() {
    int n;
    cin >> n;
    bool flag = false;
    int idx = 0;
    int idx2 = 0;
    int count = 0;
    vector <int> v(n);
    vector <int> a(n);
    for (int i = 0; i < n;i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n;i++) {
        cin >> a[i];
        if (v[i] == a[i]) count++;
    }
    if (count == n) out.push_back("YES");
    else if (count > 0) out.push_back("NO");
    else if (count == 0) {
        for (int i = 0; i < n;i++) {
            if (!flag) {
                if (v[i] == a[0]) {
                    flag = true;
                    idx++;
                    idx2 = i;
                }
            }
            else {
                if (v[i] != a[idx]) {
                    out.push_back("NO");
                    return;
                }
                idx++;
            }
        }
        for (int i = 0; i < idx2;i++) {
            if (v[i] != a[idx]) {
                flag = false;
                break;
            }
            idx++;
        }
        if (flag) out.push_back("YES");
        else out.push_back("NO");
    }
}
int main() {
    //freopen("task.in", "r", stdin);
    SAIFf
        int tc;
    cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(out);
    return 0;
}
