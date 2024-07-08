#include <bits/stdc++.h>

using namespace std;

bool rec(vector<int> vec, int n, int i, int x, bool ch, int sum) {
    if (i == n) {
        if(sum==x) ch=true;
        else ch=false;
        return ch;
    }
    return (rec(vec,n, i+1,x,ch,sum+vec[i]) || rec(vec,n,i+1,x,ch,sum-vec[i]));

}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
            cin >> vec[i];
    }
    if (rec(vec,n,1,x,false,vec[0])) cout <<"YES";
    else cout <<"NO";
    return 0;
}
