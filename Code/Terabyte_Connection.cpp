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
    cin >> n;
    ll max1,max2;
    cin >> max1 >> max2;
    max2=max1+max2;
    for (int i = 0; i < n-1; ++i) {
        int x ,y;
        cin >> x >> y;
        if(x+y>max2){
            max2=x+y;
        }
        if (x>max1){
            max1=x;
        }
    }
    out.push_back(to_string(max1)+" "+ to_string(max2));
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
