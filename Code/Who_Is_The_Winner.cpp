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

void read(vector<int>& v, int n) {
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

vector<string> out;
void SAIF() {
    int n;
    string s;
    int max;
    int pen;
    cin >> n;
    cin >> s>>max>>pen;
    for (int i = 1; i < n; ++i) {
            string s2;
            int max2;
            int pen2;
                cin >> s2>>max2>>pen2;
        if(max<max2)s=s2,max=max2,pen=pen2;
        else if(max==max2&&pen>pen2)s=s2,max=max2,pen=pen2;
    }
    out.push_back(s);
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
    