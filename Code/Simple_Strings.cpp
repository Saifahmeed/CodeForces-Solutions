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
    v.resize(n); // Resize the vector to hold n elements
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
}

vector<string> out;

void SAIF() {
    string s;
    string f;
    char fina;
    cin >> s;
    char curr = '\0'; 
    bool newCharFound = false; 
    while (!s.empty()) { 
        char m = s[0];
        if (newCharFound) {
            for (char k : alph) {
                if (k != curr && k != m) {
                    fina = k;
                    break;
                }
            }
            f = f + fina + m;
            newCharFound = false;
            curr = m;
        } else if (m == curr) {
            if (s.size() == 1) {
                for (char k : alph) {
                    if (k != curr) {
                        fina = k;
                        break;
                    }
                }
                f = f + fina;
            } else {
                newCharFound = true;
            }
        } else {
            f = f + m;
            curr = m;
        }
        s.erase(s.begin());
    }
    out.push_back(f);
}

int main() {
    SAIFf
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        SAIF();
    }
    pintff(out);
    return 0;
}
