#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int da, db;
    cin >> da >> db;
    if (da == db) {
        cout << da*100+12 << " "<< db*100+13;
    }else if (da == db-1){cout << da*100+99 << " "<< db*100;}
    else if (da == 9 && db ==1) cout << "9 10";
    else cout<< -1;
    return 0;
}
