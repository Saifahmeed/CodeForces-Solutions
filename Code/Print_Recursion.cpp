#include <bits/stdc++.h>
using namespace std;
void rec(int n) {
    if(n == 0) return;
    rec(n-1);
    cout << "I love Recursion" << endl;
}

int main() {
    vector<int> out;
    int t;
    cin >> t;  
    rec(t);
    return 0;
}
