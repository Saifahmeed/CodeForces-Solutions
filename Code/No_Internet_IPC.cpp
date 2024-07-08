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
    cin >> n>>m;
    if(m==1) out.push_back(n-1);
    else if(n==1){ out.push_back(0);
    }
    else{
        int s=n-1;
        s--;
        count++;
        if(s==0) {out.push_back(count);}
        else {s=s-2;
        count++;
        if(s==0) {out.push_back(count);}
        else{
            int g=4;
            while(s>0){
            if(m<g){
                if(s%m==0)count=count+s/m;
                else count=count+1+s/m;
                break;
            }
            else s=s-g;
            count++;
            g=g+g;
        }
        out.push_back(count);
        }
        }
    }
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
