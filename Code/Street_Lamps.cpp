#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;
vector<char> alph = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
template<class T>
void pintff(const vector<T>& v) {
    for (const auto& k : v) {
        cout << k << endl;
    }
}

vector<ll> out;

void SAIF() {
    int n;
    cin >> n;
    string v;
    cin >> v;
    int count = 0;
    int count2 = 0;
    bool flag = false;
    
    for (char c : v) {
        if (c == '*') {
            flag = true;
            if (count == 2 || count == 3) {
                count2++;
            }
            count = 0;
        } else if (c == '.') {
            if (flag) {
                flag = false;
                count = 0;
            } else {
                count++;
                if (count == 3) {
                    count2++;
                    count = 0;
                }
            }
        }
    }
    
    if (count == 1 || count == 2) {
        count2++;
    }
    
    out.push_back(count2);
}

int main() {
    SAIFf
    int tc;
    cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(out);
    return 0;
}
