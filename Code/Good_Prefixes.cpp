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

vector<string> out;
void SAIF() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, bool> alphe;
    for (char c='a'; c<='z'; c++){
        alphe[c]=false;
    }
    bool st=true;
    
    for (char c: s){
        alphe[tolower(c)]=true;
    }
    for (auto c: alphe){
        if (!c.second){
            st=false;
            break;
        }
    }
    if(st){
        out.push_back("YES");
    }
    else{
        out.push_back("NO");
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
