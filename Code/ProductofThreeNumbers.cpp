#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    long int t, n;
    cin >> t;
    int p = t;
    bool Arrf[100] = {false};
    vector<long int> s; 
    while (t != 0) {
        cin >> n;
        bool found = false; 
        for (int i = 2; i <= sqrt(n); i++) { 
            if (n % i == 0) {
                for (int j = 2; j <= sqrt(n/i); j++) {
                    if(j!=i){
                    if ((n / i) % j == 0) {
                        if ((n / i) / j !=j && (n / i) / j !=i && (n / i) / j != 1 ){
                        s.push_back(i);
                        s.push_back(j);
                        s.push_back((n / i) / j);
                        found = true;
                        break; 
                    }
                    }
                    }
                }
            }
            if (found) 
                break;
        }
        Arrf[t] = found; 
        t--;
    }
for (int k = p; k >= 1; k--) { 
    if (Arrf[k]) { 
        cout << "YES" << endl;
        for (int iter = 0; iter < 3; iter++) {
            cout << s[iter] << " ";
        }
        cout << endl;
        // Remove the displayed elements from the vector
        s.erase(s.begin(), s.begin() + 3);
    } else {
        cout << "NO" << endl;
    }
}
return 0;
}
