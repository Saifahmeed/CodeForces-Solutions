#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    int n;
    vector<string> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string m;
        cin >> m;
        if (m.size() > 10) {
            string s;
            s = m[0] + to_string(m.size() - 2) + m[m.size() - 1];
            v.push_back(s);
        } else {
            v.push_back(m);
        }
    }
    for (auto iter = 0; iter < v.size(); iter++) {
        cout << v[iter] << endl;
    }

    return 0;
}
