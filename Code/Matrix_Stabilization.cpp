#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int g(vector<vector<int>>& a, int n, int m, int x, int y) {
    int z = numeric_limits<int>::min();
    if (x > 0) z = max(z, a[x-1][y]);
    if (x < n-1) z = max(z, a[x+1][y]);
    if (y > 0) z = max(z, a[x][y-1]);
    if (y < m-1) z = max(z, a[x][y+1]);
    return z;
}

void s(vector<vector<int>>& a, int n, int m) {
    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < m; ++y) {
            int k = g(a, n, m, x, y);
            if (a[x][y] > k) a[x][y] = k;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    vector<vector<vector<int>>> r;
    for (int k = 0; k < t; ++k) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int x = 0; x < n; ++x) {
            for (int y = 0; y < m; ++y) {
                cin >> a[x][y];
            }
        }
        s(a, n, m);
        r.push_back(a);
    }
    
    for (const auto& r1 : r) {
        for (const auto& r2 : r1) {
            for (size_t j = 0; j < r2.size(); ++j) {
                if (j != 0) cout << " ";
                cout << r2[j];
            }
            cout << endl;
        }
    }
    
    return 0;
}
