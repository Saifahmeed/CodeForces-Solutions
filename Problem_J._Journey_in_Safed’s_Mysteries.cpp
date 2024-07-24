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
    ll n, m;


}#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;
vector<char> alph = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
template<class T>
void pintff(const vector<T>&v) {
    for (const auto& k : v) {
        cout << k << endl;
    }
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
    string n, s;
    cin >> n >> s;
    string news = "";
    for (char k : s) {
        if (k != '/')news += to_string((int)k - 65);
        else news += '/';
    }
    out.push_back("Gta-V");
    out.push_back(news);
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
