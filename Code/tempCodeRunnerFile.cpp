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
        cout << k << endl;
    }
}

void read(vector<int>& v, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

vector<ll> out;

void SAIF() {
    int n;
    bool zero = false;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i]==0) zero=true;
    }
    if(!zero) {
        sort(a.begin(), a.end());
        a[n-1]=0;
    }
    sort(a.begin(), a.end());
    for (int i = 1; i < n; ++i) {
        if(a[i]!=a[i-1]+1 && a[i]!=a[i-1]) {
            out.push_back(a[i-1]+1);
            break;}
    }
    if (out.size()==0){
        out.push_back(a[n-1]+1);}
}
int main() {
    SAIFf
    int tc=1;
    // cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(out);
    return 0;
}
    