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

vector<ll> out;

void SAIF() {
    ll n,l,r,x;
     cin>>n>>l>>r>>x;
     vector<ll> v(n);
     for(ll i=0;i<n;i++)
     {
        cin>>v[i];
     }
     ll ans=0;
     for(ll i=0;i<(1<<n);i++)
     {
        ll sum=0,mini=LLONG_MAX,maxi=LLONG_MIN;
        for(ll j=0;j<n;j++)
        {
            if((i&(1<<j))!=0)
            {
                sum+=v[j];
                mini=min(mini,v[j]);
                maxi=max(maxi,v[j]);
            }
        }
        if(sum>=l && sum<=r && maxi-mini>=x)
        {
            ans++;
        }
     }
     out.push_back(ans);

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
    