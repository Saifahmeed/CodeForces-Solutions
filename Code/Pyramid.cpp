#include <bits/stdc++.h>

using namespace std;

void rec(int n, int m) {
    if (n == 0) {
        return;
    }   rec(n-1, m);
        cout << setfill(' ')<< setw(n-1) << ""; // the "" is important to put the item setw and fill will get applied to
        cout << setfill('*') << setw(m-(n-1)+((m-(n-1))-1))<< ""  << endl;
        
}

int main() {
    int n;
    cin >> n;
    rec(n,n);
    return 0;
}
