#include <bits/stdc++.h>
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LLONG_MAX; 
const ll mod = 1e9 + 7;
using namespace std;

template<class T>
void printff(vector<T>& v) {
    for (auto k : v) {
        cout << k << endl;
    }
}

vector<string> out;

void SAIF() {
    int n, m;
    cin >> n >> m;
    int sum = 0;
    int rawn = 0;
    int rawmm = 0;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string mm;
        int nowsum = 0;
        int rawm = 0;
        getline(cin, mm);
        for (int j = 0; j < m; j++) {
            if (mm[j] == '#') {
                nowsum++;
                rawm = j;
            }
        }
        if (nowsum > sum) {
            sum = nowsum;
            rawn = i + 1;
            rawmm = rawm + 1;
        } 
    }
    int res = rawmm - sum + sum / 2 + 1;
    out.push_back(to_string(rawn) + " " + to_string(res));
}

int main() {
    SAIFf
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        SAIF();
    }
    printff(out);
    return 0;
}
