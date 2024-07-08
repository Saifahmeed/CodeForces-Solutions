#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> output;
    while (t--) {
        int n;
        cin >> n;
        output.push_back(n / 2);
    }
    for (int result : output) {
        cout << result << endl;
    }
    return 0;
}