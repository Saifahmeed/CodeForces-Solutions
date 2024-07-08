#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    vector <int> out;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> candies(n);
        for (int i = 0; i < n; ++i) {
            cin >> candies[i];
        }

        sort(candies.rbegin(), candies.rend());

        vector<long long> prefix_sums(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefix_sums[i + 1] = prefix_sums[i] + candies[i];
        }
        while (q--) {
            long long x;
            cin >> x;
            auto it = lower_bound(prefix_sums.begin(), prefix_sums.end(), x);
            if (it != prefix_sums.end()) {
                out.push_back(it - prefix_sums.begin());
            } else {
                out.push_back(-1);
            }
        }
    }
    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << endl;
    }

    return 0;
}
