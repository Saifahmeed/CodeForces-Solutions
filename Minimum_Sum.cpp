
#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll MOD = 998244353;
using namespace std;
vector<char> alph = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
template<class T>
void pintff(const vector<T>& v) {
    for (const auto& k : v) {
        cout << k << endl;
    }
}

vector<ll> out;

void SAIF() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    cin >> a[0] >> a[1];
    ll min = a[1];
    for (int i = 2; i < n; i++) {
        cin >> a[i];
        if (a[i] < min) {
            min = a[i];
        }
    }
    ll result = (min * n) % MOD;
    out.push_back(result);
}
int main() {
    //freopen("task.in", "r", stdin);
    SAIFf
        int tc = 1;
    // cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(out);
    return 0;
}
