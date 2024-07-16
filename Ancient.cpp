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
    string n;
    cin >> n;
    ll idx1 = 0;
    ll idx2 = n.size() - 1;
    while (n[idx1] - '0' == n[idx2] - '0') {
        if (idx1 >= idx2) { out.push_back("YES"); break; }
        idx1++;
        idx2--;
    }
    ll num1 = n[idx1] - '0';
    ll num2 = n[idx2] - '0';
    if (num1 < num2) {
        out.push_back("NO");
    }
    else if (num1 > num2) {
        out.push_back("YES");
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
