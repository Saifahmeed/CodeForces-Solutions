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

vector<string> out;

void SAIF() {
    int n;
    cin>>n;
    int mik=0;
    int ch=0;
    for (int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        if (a>b){
            mik++;
        }
        else if (b>a){
            ch++;
        }
    }
    if (mik>ch){
        out.push_back("Mishka");
    }
    else if (ch>mik){
        out.push_back("Chris");
    }
    else{
        out.push_back("Friendship is magic!^^");
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
