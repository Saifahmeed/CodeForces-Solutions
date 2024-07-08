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
void read(vector<int>& v, int n) {
    m.clear();
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

vector<int> out;
void SAIF() {
    int n,m;
    int count=0;
    bool flag=true;
    cin >> n>>m;
    pair<int,int> p;
    cin>>p.first>>p.second;
    m--;
    while (m--) {
    int x,y;
    cin>>x>>y;
    if (y<p.first || x>p.second) {
        flag=false;
        break;
    }
    if (x>=p.first) {
        p.first=x;
    }
    if (y<=p.second) {
        p.second=y;
    }
    }
    if (flag) out.push_back(p.second-p.first+1);
    else out.push_back(0);
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
