#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;
vector<char> alph = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
template<class T>
void pintff(const vector<T>& v) {
    for (const auto& k : v) {
        if(k.first == 0) {
            cout << -1 << endl;
        }
        else {
            cout << k.first << " " << k.second << endl;
        }
    }
}

void read(vector<int>& v, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

vector<pair<ll,ll>> out;

void SAIF() {
    ll n, k;
    cin >> n >> k;
    bool flag = false;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int it = upper_bound(v.begin(), v.end(), k) - v.begin();
    for (int i = 0; i <= it; ++i) {
    ll res = k / v[i];
    if (floor(res) == res) {
        vector<ll> temp;
        for (int j = 0; j <= it; ++j) {
            if (j != i) {
                temp.push_back(v[j]);
            }
        }
        if (binary_search(temp.begin(), temp.end(), res)) {
            out.push_back(mp(v[i], res));
            flag = true;
            return;
        }
    }
}
    if(!flag) {
        out.push_back(mp(0, 0));
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
