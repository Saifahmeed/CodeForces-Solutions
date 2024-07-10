#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

vector<pair<double, double>> out;

void SAIF() {
    int n, k;
    cin >> n >> k;
    
    vector<double> v;
    set<double> result_set;
    vector<double> result2;
    
    for (int i = 0; i < n; ++i) {
        double x;
        cin >> x;
        if (x <= k) {
            v.push_back(x);
        }
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        if (result_set.count(v[i])) {
            result2.push_back(v[i]);
        } else if (v[i] <= sqrt(k)) {
            double res = k / v[i];
            if (res == floor(res)) {
                result_set.insert(res);
            }
        }
    }
    
    if (result2.empty()) {
        out.push_back(make_pair(0, 0));
    } else {
        double max_value = *result2.rbegin();
        double min_value = k / max_value;
        out.push_back(make_pair(min_value, max_value));
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    
    while (tc--) {
        SAIF();
    }
    
    for (auto& p : out) {
        if (p.first == 0) {
            cout << -1 << endl;
        } else {
            cout << p.first << " " << p.second << endl;
        }
    }
    
    return 0;
}
