#include <bits/stdc++.h>
using namespace std;
void generateCombinations(const string& current, int limit, vector<long long int>& combinations) {
    if (current.length() > limit) {
        return;
    }

    if (!current.empty()) {
        combinations.push_back(stoll(current));
    }

    generateCombinations(current + '4', limit, combinations);
    generateCombinations(current + '7', limit, combinations);
}

bool isDivisibleByAnyCombination(int n) {
    vector<long long int> combinations;
    int maxLength = 4;
    generateCombinations("", maxLength, combinations);

    for (long long num : combinations) {
        if (n % num == 0) {
            return true;
        }
    }
        return false;
}   

int main() {
    int n;
    cin >> n;
    if (isDivisibleByAnyCombination(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }      
    
    return 0;
}
