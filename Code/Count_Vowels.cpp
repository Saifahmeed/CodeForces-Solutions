#include <bits/stdc++.h>

using namespace std;

int rec(const string& n, const vector<char>& m, int count, int index) {  
    if (index < 0) {
        return count;
    }
    for (char x : m) {
        if (n[index] == x) {
            count++;
            break;
        }
    }
    return rec(n, m, count, index - 1);
}

int main() {
    string n;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    getline(cin, n);
    cout << rec(n, vowels, 0, n.size() - 1);
    return 0;
}
