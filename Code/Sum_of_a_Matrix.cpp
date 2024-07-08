#include <bits/stdc++.h>

using namespace std;

void rec(const vector<vector<int>>& veca, const vector<vector<int>>& vecb, int i, int j, int r, int c) {
    if (i == r) {
        return;
    }
    if (j == c - 1) {
        cout << veca[i][j] + vecb[i][j] << endl;
        rec(veca, vecb, i + 1, 0, r, c);
    } else {
        cout << veca[i][j] + vecb[i][j] << " ";
        rec(veca, vecb, i, j + 1, r, c);
    }
}

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> veca(r, vector<int>(c));
    vector<vector<int>> vecb(r, vector<int>(c));
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> veca[i][j];
        }
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> vecb[i][j];
        }
    }
    rec(veca, vecb, 0, 0, r, c);
    return 0;
}
