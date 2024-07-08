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
unordered_map<string,int> m;
vector<int> out;
void SAIF() {
    int n;
    cin >> n;
    vector<int> p(n);
    int count=0;
    int sum=0;
    for (int i = 0; i <n; ++i) {  
        cin>>p[i];    
        sum=sum+p[i];
        }   
    int max=0;
    for (auto x : p) {
        if(sum-max==max) {
            count++;
        }
    max=max+x;
    }
    if(sum==0) {
        count--;
    }
    out.push_back(count);
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
