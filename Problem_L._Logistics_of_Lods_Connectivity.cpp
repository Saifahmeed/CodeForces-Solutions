// NOT FINISHED
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

ll modd(ll a, ll b) {
    return ((a % b) + b) % b;
}

int nCr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

ll power(ll x, ll y) { // x power y
    ll res = 1;
    while (y > 0) {
        if (y & 1) res *= x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}

int countDigit(long long n) {
    if (n == 0) return 1;
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

vector<ll> out;

void SAIF() {
    map<ll, ll> ma;
    ll n, m, e;
    cin >> n >> m >> e;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ll dif = modd(a[i] + e, 24);
        ll j = dif;
        while (j != a[i]) {
            ma[j]++;
            j = modd(j + 1, 24);
        }
    }
    for (auto i : ma) {
        cout << i.first << " " << i.second << endl;
    }
}

int main() {
    // freopen("task.in", "r", stdin);
    SAIFf
        int tc = 1;
    // cin >> tc;
    while (tc--) {
        SAIF();
    }

    // pintff(out);
    return 0;
}
