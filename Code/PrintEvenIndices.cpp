#include <iostream>
#include <vector>
#include <string>

using namespace std;

string rec(vector<int>& n, string m) {
    if (n.empty()) {
        return m;
    }
    if (n.size() % 2 == 0) {
        n.pop_back();
        return rec(n, m);
    } else {
        if (!m.empty()) {
            m = m+ " ";
        }
        m = m+ to_string(n.back());
        n.pop_back();
        return rec(n, m);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << rec(arr, "") << endl;
    return 0;
}
