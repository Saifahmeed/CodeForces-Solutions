#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> throws(n);
    for (int i = 0; i < n; ++i) {
        cin >> throws[i];
    }

    int sum = 0;
    bool can_lie = true;

    for (int i = 0; i < n; ++i) {
        if (throws[i] == 6) {
            if (can_lie) {
                sum += 6;
            } else {
                sum += throws[i];
            }
            can_lie = true;
        } else {
            sum += throws[i];
            can_lie = false;
        }
    }

    cout << sum << endl;

    return 0;
}
