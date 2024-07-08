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

vector<int> out;

void SAIF() {
    int n,m;
    int x=1;
    int count=1;
    cin>>n>>m;
    vector <int> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    v.erase(v.begin());
    for (int i=1; i<n; i++){
        if(v[i]<=count){
            count++;
    v.erase(v.begin()+i);
        }
        if(n-i<m-count && i!=n){
            count++;
            x++;
        }
    }
    out.push_back(x);
    
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
