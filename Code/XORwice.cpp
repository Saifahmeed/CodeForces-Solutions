#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LLONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;

template<class T>
void pintff(const vector<T>& v) {
    for (const auto& k : v) {
        cout << k << endl;
    }
}

void read(vector<int>& v, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

unordered_map<char, int> m, h;
vector<int> out;

void SAIF() {
    ll n, mm;
    cin >> n >> mm;
    ll fina = 0;
    for (int i = 33; i >= 0; i--) {
        if ((n & (1LL << i)) && (mm & (1LL << i))) {
            fina += pow(2, i);
        }
    }
    out.push_back((n ^ fina) + (mm ^ fina));
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
