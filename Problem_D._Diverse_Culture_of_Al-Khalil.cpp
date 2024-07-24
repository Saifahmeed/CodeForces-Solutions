#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

vector<ll> out;

void SAIF() {
    ll n, m;
    cin >> n >> m;
    ll count = 0;
    vector<vector<char>> v(n, vector<char>(m, 0));

    vector<ll> ans;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
            if (v[i][j] == 'o') {
                count++;
                ans.push_back(i + j);
            }
        }
    }

    if (count == 1 || count == 0) {
        out.push_back((m + n - 2) * 2);
        return;
    }
    else {
        sort(ans.begin(), ans.end());
        if (ans[0] == ans[ans.size() - 1]) {
            out.push_back((m + n - 2) * 2);
            return;
        }
        else {
            ll smallc = ans[0];
            ll secsmallc = ans[ans.size() - 1];
            ll diff = (m + n - 2) - secsmallc;
            ll final = 2 * (smallc + diff) + 1;
            out.push_back(final);
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        SAIF();
    }

    for (const auto& value : out) {
        cout << value << endl;
    }

    return 0;
}
