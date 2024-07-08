#include <iostream>
#include <vector>
using namespace std;

int main() {
    long int t, n;
    vector<int> counts;
    long int x, y;
    cin >> t;
    while (t != 0) {
        cin >> n >> x >> y;
        int count = 0;
        long long int Arrev[200000] = {0};
        long long int Arrodd[200000] = {0};

        int evenIndex = 0;
        int oddIndex = 0;

        for (int i = 0; i < n; i++) {
            int p;
            cin >> p;
            if (p % 2 == 0) {
                Arrev[evenIndex] = p;
                evenIndex++;
            } else {
                Arrodd[oddIndex] = p;
                oddIndex++;
            }
        }

        for (int i = 0; i < evenIndex; i++) {
            cout << Arrev[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < oddIndex; i++) {
            cout << Arrodd[i] << " ";
        } 
        if (x % 2 != 0 && y % 2 != 0) {
            for (int i = 0; i < evenIndex; i++) {
                for (int j = 0; j < oddIndex; j++) {
                    if ((Arrev[i] + Arrodd[j]) % x == 0 && (Arrev[i] - Arrodd[j]) % y == 0)
                        count++;
                }
            }
        } else {
            for (int i = 0; i < evenIndex; i++) {
                for (int j = i + 1; j < evenIndex; j++) {
                    if ((Arrev[i] + Arrev[j]) % x == 0 && (Arrev[i] - Arrev[j]) % y == 0)
                        count++;
                }
            }
            for (int i = 0; i < oddIndex; i++) {
                for (int j = i + 1; j < oddIndex; j++) {
                    if ((Arrodd[i] + Arrodd[j]) % x == 0 && (Arrodd[i] - Arrodd[j]) % y == 0)
                        count++;
                }
            }
        }
        counts.push_back(count);
        t--;
    }
    for (size_t iter = 0; iter < counts.size(); iter++) {
        cout << counts[iter] << endl;
    }
    return 0;
}
