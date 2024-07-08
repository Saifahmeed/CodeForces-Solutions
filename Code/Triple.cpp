#include<bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod= 1e9+7;
using namespace std;
template<class T>
void printff(vector<T>& v) {
    for (auto k : v){ 
    cout << k<< endl;}
}
vector<int> out;
vector<int> w;
unordered_map<int, int> m;
int triple( vector<int> arr, int n){
    m.clear();
    for (int i=0;i<n;i++){
        m[arr[i]]++;
        if (m[arr[i]]==3) return arr[i];
    }
    return -1;
}
void SAIF(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
out.push_back(triple(arr, n));
}
int main() {
  SAIFf
  int tc;
  cin>>tc;
  while(tc--) {SAIF();}
  printff(out);
  return 0;
}