#include <iostream>
#include <cmath>
using namespace std;

bool check(double num) {
    double epsilon = 1e-20; // Adjust the tolerance according to your precision needs
    return fabs(num - round(num)) < epsilon;
}

int main() {
    int n, k;
    cin >> n >> k;
    int Arr[100000];
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> Arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (check(log2(Arr[i] * Arr[j]) / log2(k))) {
                 count++;
                 cout << Arr[i] << " " << Arr[j] << endl;
            }
        }
    }
    cout << count;
    return 0;
}
