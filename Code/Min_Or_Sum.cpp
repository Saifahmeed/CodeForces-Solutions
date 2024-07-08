#include <bits/stdc++.h>
using namespace std;
template<class T>
void pintff(const vector<T>& v) {
    for (const auto& k : v) {
        cout << k << endl;
    }
}
int main() {
    int t;
    cin >> t;
    vector <long long> out;
    while (t--) {
        int n;
        cin >> n;
        int result = 0;
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            result |= num;
        }
        out.push_back(result);
    }
        pintff(out);
    
    return 0;
}
