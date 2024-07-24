#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LLONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;

vector<char> alph = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

template<class T>
void pintff(const vector<T>& v) {
    for (const auto& k : v) {
        cout << k << endl;
    }
}

int nCr(int n, int r) {
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

ll power(ll x, ll y) {
    ll res = 1;
    while (y > 0) {
        if (y & 1)
            res *= x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}

int countDigit(long long n) {
    if (n == 0)
        return 1;

    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

vector<ll> out;

void SAIF() {
    map<ll, ll> m;
    ll n, q, x, y;
    ll count = 0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]] = i + 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x >> y;
        if (x == 1) {
            count += y;
        }
        else if (x == 2) {
            auto it = m.find(y);
            if (it != m.end()) {
                ll ncount = ((count % n) + n) % n;
                ll anse = (it->second + ncount);
                if (anse > n) anse = ((anse % n) + n) % n;
                if (anse == 0) anse = n;
                out.push_back(anse);
            }
            else {
                out.push_back(-1);
            }
        }
    }
}

int main() {
    SAIFf
        int tc;
    cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(out);
    return 0;
}
