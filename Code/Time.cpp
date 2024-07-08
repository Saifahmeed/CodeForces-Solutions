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
        m[v[i]]++;
    }
}

vector<string> out;

int main() {
    SAIFf
    int tc;
    int t=1;
    cin >> tc;
    while (tc--) {
    int m=2;
    vector <ll> max;
    while (m--){
    int h,m,s;
    cin >> h>>m>>s;
    max.push_back(h*60*60+m*60+s);
}
if(max[0]==max[1]) out.push_back("Case " + to_string(t) + ": Yes");
else out.push_back("Case " + to_string(t) + ": No");
t++;
    }
    pintff(out);
    return 0;   
}
