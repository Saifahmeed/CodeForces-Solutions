#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool done = true;
    char Arr[300][300];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> Arr[i][j];
        }
    }
    char di = Arr[0][0];
    char ne = Arr[0][1];
    if (di == ne) {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (Arr[i][i] != di || Arr[i][n - i - 1] != di) {
            done = false;
            break;
        }
    }
    if (done) {
        for (int i = 0; i < n; i++) {
            Arr[i][i] = ne;
            Arr[i][n - i - 1] = ne;
        }
    }
    if (done) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i != j && i != n - j - 1) && Arr[i][j] != ne) {
                    done = false;
                    break;
                }
            }
            if (!done) break;
        }
    }
    if (done) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
