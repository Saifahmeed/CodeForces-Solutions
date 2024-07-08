#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;

template<class T>
void printff(vector<T>& v) {
    for (auto k : v) {
        cout << k << endl;
    }
}

vector<int> out;

bool rec(vector<int>& a, int target, int i) {
}

void SAIF() {
    int x,y,z;
    cin >> x>>y>>z>>k;
    vector<int> a(n);
    int m=max(x,y,z);
    
    for (int i = n-1; i >= 0; i--) {
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            if (i != j) temp.push_back(a[j]);
        }
        if (canBeSum(temp, a[i], 0)) {
            count++;
        }
        a.pop_back();
    }

    out.push_back(count);
}

int main() {
    SAIFf
    int tc;
    cin >> tc;
    while (tc--) {
        SAIF();
    }
    printff(out);
    return 0;
}
