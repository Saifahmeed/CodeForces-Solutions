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
ll modd(ll a, ll b) {
    return((a % b) + b) % b;
}
int nCr(int n, int r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
ll power(ll x, ll y) {//x power y
    ll res = 1;
    while (y > 0) {
        if (y & 1)
            res *= x;
        y = y >> 1;
        x = x * x;
    }
    return res;
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

vector<string> out;

void SAIF() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n, 0), b(n, 0);
    int minn = 0;
    int pik = INT_MAX;
    int sum1 = 0;
    int sum2 = 0;
    int psum = 0;
    int j = n - 1;
    for (int j = 0; j < n; j++) {
        cin >> a[j];
    }
    for (int j = 0; j < n; j++) {
        cin >> b[j];
    }
    if (n == m) { cout << a[n - 1] << endl; }
    else {
        while (j >= 0) {
            if (j > m - 1) {
                sum2 += b[j];
                sum1 = a[j] + psum;
                if (sum1 < sum2) {
                    minn += psum + a[j];
                    sum2 = 0;
                    sum1 = 0;
                    psum = 0;
                }
            }
            else if (j == m - 1) {
                pik = min(pik, a[j] + psum);
                sum2 += b[j];
            }
            else {
                sum2 += b[j];
                sum1 = a[j] + psum;
                pik = min(pik, a[j] + psum);
            }
            psum = sum2;
            j--;
        }
        cout << minn + pik << endl;
    }

}
int main() {
    //freopen("task.in", "r", stdin);
    SAIFf
        int tc = 1;
    cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(out);
    return 0;
}

