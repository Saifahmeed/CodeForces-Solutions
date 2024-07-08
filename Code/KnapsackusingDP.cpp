#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i].first >> vec[i].second;
    }
    // Initialize DP table
    vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));

    // Fill DP table
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= w; ++j) {
            if (vec[i - 1].first <= j) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - vec[i - 1].first] + vec[i - 1].second);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // The answer will be in dp[n][w]
    cout << dp[n][w];
    return 0;
}
