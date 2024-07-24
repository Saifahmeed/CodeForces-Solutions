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

vector<string> out;

ll power(ll base, ll exp) {
    ll res = 1;
    for (ll i = 0; i < exp; ++i) {
        if (res > LLONG_MAX / base) {
            return LLONG_MAX;
        }
        res *= base;
    }
    return res;
}

bool hauh(ll pro, ll k) {
    ll r = pow(pro, 1.0 / k);
    for (ll i = max(0LL, r - 2); i <= r + 2; ++i) {
        if (power(i, k) == pro) return true;
    }
    return false;
}

void SAIF() {
    ll n, k;
    cin >> n >> k;
    ll pro = 1;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (pro > LLONG_MAX / v[i]) {
            pro = LLONG_MAX;
            break;
        }
        pro *= v[i];
    }
    if (hauh(pro, k)) {
        out.push_back("Yes");
    }
    else {
        out.push_back("No");
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
