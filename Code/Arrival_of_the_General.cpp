#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[i] = x;
    }
    vector<pair<int, int>> v;
    for (auto i : m) {
        v.push_back({i.second, i.first});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
    int max = 0, min = 0,load=n-1;
    for (int i = 0; i < n; i++) {
        if (v[i].first == v[0].first) {
            min = v[i].second;
        }
        if (v[i].first == v[n-1].first) {
            if (i<load){
            load = i;
            max = v[i].second;
        }
        }else {
            max = v[n-1].second;
        }
    }
    cout << min << " " << max << endl;
    if (min > max) {
        cout << n-min + max - 1;
    } else {
        cout << n-min + max-2;
    }
    return 0;
}
