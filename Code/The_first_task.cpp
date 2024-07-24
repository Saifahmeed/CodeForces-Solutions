#include <bits/stdc++.h>
#define SAIFf ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
using namespace std;

void process_test_case() {
    int n;
    ll ans = LLONG_MAX, pre = 0, x = 0, anss = 0;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    int maxx = 0;

    for (auto& d : v) {
        cin >> d;
        if (s.count(d)) anss++;
        s.insert(d);
        maxx = max(maxx, d);
    }

    x = s.size();

    for (int i = 1; i <= maxx; ++i) {
        if (!s.count(i)) {
            pre++;
        }
        else {
            x--;
        }
        ans = min(ans, x + pre);
    }
    cout << ans + anss << endl;
}

int main() {
    freopen("task.in", "r", stdin);
    SAIFf
        int tc;
    cin >> tc;
    while (tc--) {
        process_test_case();
    }
    return 0;
}
