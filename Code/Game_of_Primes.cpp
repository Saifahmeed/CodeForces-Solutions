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
bool isPrime(ll num) {
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (ll i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

ll F(ll x) {
    for (ll i = 3; i * i <= x; i++) {
        if (x % i == 0) return x / i;
    }
    return 1;
}

vector<ll> out;

void SAIF() {
    ll n;
    ll count = 0;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (isPrime(a[i])) {
            count++;
        }
        else {
            if (i % 2 == 0) {
                if (a[i] % 2 == 0) {
                    count++;
                }
                else {
                    for (int j = 3; j <= sqrt(a[i]); j += 2) {
                        if (a[i] % j == 0) {
                            if (isPrime(a[i] / j) || isPrime(j)) {
                                count++;
                            }
                            break;
                        }
                    }
                }
            }
            else {
                if (a[i] % 2 == 0) {
                    if (isPrime(a[i] / 2)) {
                        count++;
                    }
                }
                else {
                    for (int j = 3; j <= sqrt(a[i]); j += 2) {
                        if (a[i] % j == 0) {
                            if (isPrime(a[i] / j) && isPrime(j)) {
                                count++;
                            }
                            break;
                        }
                    }
                }
            }
        }
    }
    out.push_back(count);
}
int main() {
    //freopen("task.in", "r", stdin);
    SAIFf
        int tc;
    cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(out);
    return 0;
}
