#include <bits/stdc++.h>

using namespace std;

long long rec(const vector<int>& vec, int i, int m) {
    if (m == 0) {
        return 0;
    }
    return vec[i] + rec(vec, i + 1, m - 1);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }
    cout << rec(vec, n - m, m);
    return 0;
}
