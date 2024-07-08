#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;
vector <char> alph = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
template<class T>
void pintff(vector<T>& v) {
    for (auto k : v) {
        cout << k << endl;
    }
}
unordered_map<int,int> m;
long long int read(vector<ll>& v, int n, long long int sum) {
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum+=v[i];
    }
    sort(v.begin(), v.end());
    return sum;
}

vector<string> out;
vector<int> outt;
void SAIF() {
    int n;
    cin >> n;
    vector<ll> v(n);
    long long int sum = read(v, n, 0);
    if(v.back() > (sum + 1) / 2) out.push_back("NO");
    else out.push_back("YES");
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
