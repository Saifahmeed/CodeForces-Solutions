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
void read(vector<int>& v, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

vector<int> out;
void SAIF() {
    int n, m,mmm,sum;
    unordered_map<int, int> map;
    cin >> n>> m;
    vector <int> k(n);
    read(k, n);
    unordered_set<int> mm(n);
    for(int i=n-1;i>=0;i--){
        mm.insert(k[i]);
        map[i+1]=mm.size();        
    }
    while(m--){
    cin>>mmm;
    out.push_back(map[mmm]);
    }
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
