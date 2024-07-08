#include <bits/stdc++.h>

using namespace std;

int rec(vector <int> vec, int i, int max) {  
    if (i<0) {
        return max;
    }
    if(vec[i]>max) max=vec[i];
    return rec(vec,i-1, max);
}

int main() {
    int n;
    cin >> n;
    vector <int> vec(n);
    for(int i=0;i<n;i++){
        cin>> vec[i];
    }
    cout << rec(vec, vec.size()-2,vec[vec.size()-1]);
    return 0;
}
