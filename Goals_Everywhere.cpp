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
// int rec(vector<int>& a, int count) {
//     if (a.size() == 1) {
//         return count + a[0];
//     }

// }
vector<ll> out;
void SAIF() {
    int n;
    cin >> n;
    int count = 0;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    while (a.size() > 1) {
        sort(a.begin(), a.end(), greater<int>());
        count += a[0];
        int x = a[0];
        int idx = 1;
        while (x > 0) {
            if (x - a[idx] > 0) {
                x = x - a[idx];
                idx++;
            }
            else {
                a[idx] = a[idx] - x;
            }
        }
        a.erase(a.begin());
    }
    count += a[0];
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
