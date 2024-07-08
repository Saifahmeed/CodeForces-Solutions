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
int triple( vector<int> arr, int n, int k){
    pair<int, int> sum; 
    int cur = 0;
    for (int j = 0; j < k; ++j) {
        cur += arr[j];
    }
    sum = {cur,0};
    for (int i = 1; i <= n - k; ++i) {
        cur = cur-arr[i-1]+arr[i+k-1];
        if (cur < sum.first) {
            sum = {cur, i};
        }
    }
    return sum.second+1;
}
void SAIF(){
  int n,k;
  cin>>n>>k;
  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
out.push_back(triple(arr, n,k));
}
int main() {
  SAIFf
  int tc=1;
//   cin>>tc;
  while(tc--) {SAIF();}
  printff(out);
  return 0;
}