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
void pllff(const vector<T>& v) {
    for (const auto& k : v) {
        cout << k << endl;
    }
}

void read(vector<ll>& v, ll n) {
    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

vector<string> out;


int main() {
    ll n;
    vector<ll> S;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), [](pair<ll,ll>a,pair<ll, ll> b) {if ( a.second == b.second ) return a.first > b.first ; else return a.second < b.second;});
    ll k = -1000000;
    for (const auto &i : a) {
        if (i.first > k) {
            k = i.second;
            S.push_back(k);
        }
    }
    cout << S.size() << endl;
    for (ll o : S) {
        cout << o << " ";
    }
}


