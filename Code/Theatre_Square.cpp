#include <bits/stdc++.h>
using namespace std;
int main() {

int n,m,a;
cin >> n >>m>>a;
long long int s=0;
long long int k=0;
if(n%a !=0){
    s=(n/a)+1;
}else s=n/a;
if(m%a !=0){
    k=(m/a)+1;
}else k=m/a;
cout <<k*s<< endl;
return 0;
}