#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;
vector<char> alph = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
template<class T>
void pintff(const vector<T>& v) {
    for (const auto& k : v) {
        cout << k << endl;
    }
}
int countDigit(long long n)
{
    if (n == 0)
        return 1;

    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

vector<ll> out;

void SAIF() {
    ll n, m;
    ll count = 0;
    cin >> n >> m;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < m; i++) {
            char x;
            cin >> x;
            if (flag) {
                if (x == '.')count++;
                else if (x == '|') {
                    flag = false;
                }
            }
            else {
                if (x == '|') {
                    flag = true;
                }
            }
        }
    }
    out.push_back(count);
}
int main() {
    //freopen("task.in", "r", stdin);
    SAIFf
        int tc = 1;
    // cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(out);
    return 0;
}
