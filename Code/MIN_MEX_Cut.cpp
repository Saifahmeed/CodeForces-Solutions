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

vector<int> out;

void SAIF() {
    string s;
    int x=0;
    int y=0;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            x++;
        }
        else{
            y++;
        }
    }
    if(y==0){
        out.push_back(0);
        return;
    }else if (s[0]=='1'&&s[s.size()-1]=='1') {
        int count=0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='1'){
                count++;
            }
            else break;
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                count++;
            }
            else break;
        }
        if (s.size()-count==y) out.push_back(1);
        else out.push_back(2);
        }
    else if (s[0]=='0') {
        int count=0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='1'){
                count++;
            }
            else break;
        }
        if (s.size()-count==y) out.push_back(1);
        else out.push_back(2);
        } 
    else if (s[s.size()-1]=='0') {
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                count++;
            }
            else break;
        }
        if (s.size()-count==y) out.push_back(1);
        else out.push_back(2);
        } 
    else out.push_back(2);
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
