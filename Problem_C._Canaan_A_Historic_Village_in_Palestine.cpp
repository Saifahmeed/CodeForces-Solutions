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

vector<string> out;

void SAIF() {
    int a, b;
    cin >> a >> b;
    if (a > 0 && b == 0) {
        out.push_back("Gold");
    }
    if (b > 0 && a == 0) {
        out.push_back("Silver");
    }
    if (b > 0 && a > 0) {
        out.push_back("Alloy");
    }


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
