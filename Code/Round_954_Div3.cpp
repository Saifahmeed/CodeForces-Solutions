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
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}
vector<string> out;
vector<int> outt;
void SAIF() {
    int n=3;
    vector<int> a(n);
    read(a,n);
    sort(a.begin(),a.end());
    int sum = abs(a[1]-a[0]) + abs(a[1]-a[1]) + abs(a[1]-a[2]);
    outt.push_back(sum);
}

int main() {
    SAIFf
    int tc;
    cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(outt);
    return 0;   
}
