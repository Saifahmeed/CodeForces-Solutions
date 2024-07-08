#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;
vector <char> alph = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
template<class T>
void pintff(vector<T>& v) {
    for (auto k : v) {
        cout << k << endl;
    }
}
unordered_map<int,int> m;
void read(vector<int>& v, int n) {
    m.clear();
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

vector<string> out;
vector<int> outt;
void SAIF() {
    int n;
    cin >> n;
    out.clear();
    for (int i = 0; i < n; ++i) {
        long long int x;
        cin >> x;
        if (x == 1) {
            out.push_back("deficient");
            continue;
        }
        long long int sum = 1;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                sum += i;
                if (i != x / i) {
                    sum += x / i;
                }
            }
        }
        if (sum > x) out.push_back("abundant");
        else if (sum < x) out.push_back("deficient");
        else out.push_back("perfect");
    }
}

int main() {
    SAIFf
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(out);
    return 0;   
}
