#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x == y) {
        cout << "=" << endl;
    } else if (x == 1 || y == 1) {
        if (x == 1) {
            cout << "<" << endl;
        } else {
            cout << ">" << endl;  
        }
    } else {
        long double comparison = y * log(x) - x * log(y);
        if (comparison < 0) {
            cout << "<" << endl;
        } else if (comparison > 0) {
            cout << ">" << endl;
        } else {
            cout << "=" << endl;
        }
    }

    return 0;
}
