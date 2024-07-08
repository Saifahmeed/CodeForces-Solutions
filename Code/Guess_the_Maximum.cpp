#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> out;
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;  
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int min_max_adj = INT_MAX;
        for (int i = 1; i < n; ++i) {
            int max_adj = max(a[i-1], a[i]);
            if (max_adj < min_max_adj) {
                min_max_adj = max_adj;
            }
        }
        int result = min_max_adj - 1;
        out.push_back(result);
    }
    
    for (int i = 0; i < out.size(); i++) {
        cout << out[i] << endl;
    }

    return 0;
}
