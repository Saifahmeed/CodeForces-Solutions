#include <bits/stdc++.h>
#define mp make_pair
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long double ld;
typedef long long ll;
const ll oo = LONG_LONG_MAX;
const ll mod = 1e9 + 7;
using namespace std;

vector<int> out;

void SAIF() {
    int n, q;
    cin >> n >> q;
    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    
    sort(prices.begin(), prices.end());

    vector<ll> prefixSum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + prices[i - 1];
    }

    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        ll sum = prefixSum[n - x + y] - prefixSum[n - x];
        out.push_back(sum);
    }
}

int main() {
    SAIFf
    int tc = 1;
    while (tc--) {
        SAIF();
    }
    for (auto val : out) {
        cout << val << endl;
    }
    return 0;
}
