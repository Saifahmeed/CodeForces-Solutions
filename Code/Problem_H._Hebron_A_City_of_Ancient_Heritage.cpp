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
        cout << k << " ";
    }
}

ll power(ll x, ll y) {//x power y
    ll res = 1;
    while (y > 0) {
        if (y & 1)
            res *= x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}

int countDigit(long long n)
{
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
    ll n, k;
    ll idx = 0;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < k; i++) {
        for (ll j = i; j < n; j += k) {
            v[j] = ++idx;
        }
    }
    out = v;
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
