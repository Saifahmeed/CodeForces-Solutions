    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int n;
        cin >> n;
        vector<long long int> vec(n);
        unordered_map<long long, int> checked_tprimes;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        for (long long int m : vec) {
        bool pr=true;
    if (checked_tprimes.find(m) == checked_tprimes.end()) {
            
        long long int k=sqrt(m);
        if ( (k*k)!=m){
            pr=false;
        }
        else if (k < 2) pr=false;
        else {
            for(long long int i=2; i*i<=k;i++){
                if (k%i==0) pr=false;
            }
        }
  if (pr) {
                cout << "YES" << endl;
                checked_tprimes[m]= 1; 
            } else {
                cout << "NO" << endl;
                checked_tprimes[m]= 0; 
            }
        } else {
            if (checked_tprimes[m]== 1) {
                cout <<"YES"<< endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}