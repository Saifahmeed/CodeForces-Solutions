#include <bits/stdc++.h>
using namespace std;

int gcd_(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd_(b, a % b);
}

bool isNonDecreasing(vector<int> &gcdd) {
    for (int i = 0; i < gcdd.size() - 1; ++i) {
        if (gcdd[i] > gcdd[i + 1]) {
            return false;
        }
    }
    return true;
}

bool canBeNonDecreasingWithOneRemoval(vector<int> &vec) {
    int n = vec.size();
    vector<int> gcdd;

    for (int i = 0; i < n - 1; ++i) {
        gcdd.push_back(gcd_(vec[i], vec[i + 1]));
    }

    if (isNonDecreasing(gcdd)) {
        return true;x
    }

    for (int i = 0; i < n; ++i) {
        vector<int> tempVec;
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                tempVec.push_back(vec[j]);
            }
        }

        vector<int> tempGcd;
        for (int k = 0; k < tempVec.size() - 1; ++k) {
            tempGcd.push_back(gcd_(tempVec[k], tempVec[k + 1]));
        }

        if (isNonDecreasing(tempGcd)) {
            return true;
        }
    }

    return false;
}

int main() {
    int t, n;
    cin >> t;
    vector<string> out;

    while (t--) {
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
        }

        if (canBeNonDecreasingWithOneRemoval(vec)) {
            out.push_back("YES");
        } else {
            out.push_back("NO");
        }
    }

    for (const string &result : out) {
        cout << result << endl;
    }

    return 0;
}
