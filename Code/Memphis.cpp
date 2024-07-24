
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
ll countDigit(ll n)
{
    if (n == 0)
        return 1;

    ll count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

ll cal(ll n) {
    if (n == 0) return 0;
    ll tot = 0;
    ll f = 1;
    ll ca = 1;
    while (ca <= n) {
        ll ne = ca * 10;
        tot += (min(n + 1, ne) - ca) * countDigit(ca);
        ca = ne;
    }
    return tot;
}

vector<ll> out;

void SAIF() {
    ll L, R;
    cin >> L >> R;
    ll tot = cal(R) - cal(L - 1);
    out.push_back(tot);
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
