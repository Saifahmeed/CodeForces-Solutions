#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        int s=1;
        for(int i=3;i<=n/2;i++){
            for(int j=2;j*j<=i;j++){
                if(j%i==0){
                    break;
                }
            }
        }
        cout<<s;
    
    return 0;
}