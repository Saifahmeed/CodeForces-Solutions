#include <bits/stdc++.h>
using namespace std;

pair<int, int> rec(vector<pair<int, int>> &vec, int n, int i, int w, pair<int, int> sum) {
    if (i == n) {
        return sum;
    }
    if (sum.first + vec[i].first <= w) {
        pair<int, int> include = rec(vec, n, i + 1, w, {sum.first + vec[i].first, sum.second + vec[i].second});
        pair<int, int> exclude = rec(vec, n, i + 1, w, sum);
        return (include.second > exclude.second) ? include : exclude;
    } else {
        return rec(vec, n, i + 1, w, sum);
    }
}

int main() {
    int n, w;
    cin >> n >> w;
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i].first >> vec[i].second;
    }
    cout << rec(vec, n, 0, w, {0, 0}).second;
    return 0;
}
