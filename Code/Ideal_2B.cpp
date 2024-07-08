#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int countDigit(long long n)
{
    int count = 0;
    if (n == 0) return 1;
    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}
int main() {
    long long x;
    cin >> x;
    if (x < 1000) {
        cout << x;
        return 0;
    }
    if (countDigit(x) > 3 && countDigit(x) < 7) {
        int a =(x/100)%10;
        if (a == 0) {
            cout << x / 1000 << "K";
        }
        else {   if (countDigit(x / 1000) >= 2) cout << x / 1000 << "K";
            else{
            cout << x / 1000 << "." << a << "K";
        }
    }}else if (countDigit(x) > 6 && countDigit(x) < 10){ 
        int m =(x/100000)%10;
        if (m == 0) {
             cout << x / 1000000 << "M";
        }
        else { if (countDigit(x / 1000000) >= 2) cout << x / 1000000 << "M";
            else{
            cout << x / 1000000 << "." << m << "M";
            }
        }
       
    }else {
        int k =(x/100000000 )%10;
        if (k == 0) {
            cout << x / 1000000000 << "B";
        }
        else {
            if (countDigit(x / 1000000000) >= 2) cout << x / 1000000000 << "B";
            else{
            cout << x / 1000000000 << "." << k << "B";
        }
    }}

    return 0;
}
