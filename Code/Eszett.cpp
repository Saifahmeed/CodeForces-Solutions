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
    string s;
    cin >> s;
    
    string f, k, j;
    int count = 0;
    
    for (char m : s) {
        if (m != 'S') {
            if (count == 0) {
                f += tolower(m);
                if (!k.empty()) k += tolower(m);
                if (!j.empty()) j += tolower(m);
            } else if (count == 1) {
                f += 's';
                f += tolower(m);
                count = 0;
                if (!k.empty()) 
                {k += 's';
                k+= tolower(m);}
            } else if (count == 2) {
                k = f + 'B';
                k += tolower(m);
                f += "ss";
                f += tolower(m);
                count = 0;
            } else if (count == 3) {
                k = f + "Bs";
                k += tolower(m);
                j += f+ "sB";
                j += tolower(m);
                f += "sss";
                f += tolower(m);
                count = 0;
            }
        } else {
            ++count;
        }
    }
    if (count!=0)
    {
        if (count == 1) {
            f += 's';
            if (!k.empty()) k += 's';
        } else if (count == 2) {
            k = f + 'B';
            f += "ss";
        } else if (count == 3) {
            k = f + "Bs";
            j += f+ "sB";
            f += "sss";
        }
    }
    
    out.push_back(f);
    if (!k.empty()) out.push_back(k);
    if (!j.empty()) out.push_back(j);
}

int main() {
    SAIFf
    int tc=1;
    // cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(out);
    return 0;
}
