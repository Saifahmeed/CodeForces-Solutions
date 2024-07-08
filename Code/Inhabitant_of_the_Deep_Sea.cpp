#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void beginn(int &begin, int Arr[]) {
    if (Arr[begin] != 0) {
        Arr[begin]--;
    } else {
        begin++;
        beginn(begin, Arr);
    }
}

void endd(int &finall, int Arr[]) {
    if (Arr[finall] != 0) {
        Arr[finall]--;
    } else {
        finall--;
        endd(finall, Arr);
    }
}

int main() {
    int t;
    cin >> t;

    vector<int> Arrcount;

    while (t--) {
        int n;
        long long int k;
        cin >> n >> k;

        int Arr[200000];
        for (int i = 0; i < n; i++) {
            cin >> Arr[i];
        }

        int finall = n - 1;
        int begin = 0;

        for (int j = 0; j < k; j++) {
            if (j % 2 == 0) {
                beginn(begin, Arr);
            } else {
                endd(finall, Arr);
            }
        }

        int count = 0;
        for (int m = 0; m < n; m++) {
            if (Arr[m] == 0) count++;
        }

        Arrcount.push_back(count);
    }

    for (int i = 0; i < Arrcount.size(); i++) {
        cout << Arrcount[i] << endl;
    }

    return 0;
}
// #include <iostream>
// #include <vector>
// #include <cmath>

// using namespace std;

// void beginn(int &begin, int Arr[]) {
//     if (Arr[begin] != 0) {
//         Arr[begin]--;
//     } else {
//         begin++;
//         beginn(begin, Arr);
//     }
// }

// void endd(int &finall, int Arr[]) {
//     if (Arr[finall] != 0) {
//         Arr[finall]--;
//     } else {
//         finall--;
//         endd(finall, Arr);
//     }
// }

// int main() {
//     int t;
//     cin >> t;

//     vector<int> Arrcount;

//     while (t--) {
//         int n;
//         long long int k;
//         cin >> n >> k;

//         int Arr[200000];
//         for (int i = 0; i < n; i++) {
//             cin >> Arr[i];
//         }

//         int finall = n - 1;
//         int begin = 0;
//         if (k%2==0){
//         for (long long int j = 0; j <= k; j=j+2) {
//                 beginn(begin, Arr);
//                 if(j!=k) endd(finall, Arr);
//         }}
//         else {
//             for (long long int j = 1; j <= k; j=j+2) {
//             beginn(begin, Arr);
//             if(j!=k) endd(finall, Arr);
//         }}

//         int count = 0;
//         for (int m = 0; m < n; m++) {
//             if (Arr[m] == 0) count++;
//         }

//         Arrcount.push_back(count);
//     }

//     for (int i = 0; i < Arrcount.size(); i++) {
//         cout << Arrcount[i] << endl;
//     }

//     return 0;
// }
 
