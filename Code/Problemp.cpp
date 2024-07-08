#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;
 
template<class T>
void pintff(vector<T>& v) {
    for (auto k : v) {
        cout << k << endl;
    }
}
 
vector<int> out;
 
bool cann(vector<long long int> a, int n) {
    long long int sum=0;
    if(n==1){
        if(a[0]==0) return true;
        else return false;
    }else{
    sort(a.begin(), a.end());
    for(int i=0; i<n-1;i++){
        sum+=a[i];
    }
    if(a[n-1]==sum) return true;}
    return false;
}
 
void SAIF() {
    long long int n;
    cin >> n;
    vector<long long int> a(n);
    for (long long int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count=0;
    int countt=0;
    for (int j=0;j<n;j++){
    if(a.back()==0&&a.size()>1){ a.pop_back(); countt++;}
    else{int m=a.size();
    if(cann(a,m)){
        count++;
        count +=countt;
        countt=0;
    }
    a.pop_back();
    }}
    out.push_back(count);
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