#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> t;
    vector<string> results;  // Vector to store results for each test case

    while (t--) {   
        cin >> n;
        vector<string> strings(n);  // Vector to store the input strings

        for (int i = 0; i < n; i++) {
            cin >> strings[i];
        }

        int a = 0, b = 0, c = 0, d = 0;

        for (int i = 0; i < n; i++) {
            string s = strings[i];
            for (int j = 0; j < s.length(); j++) {
                if (s[j] >= 'a' && s[j] <= 'z') {
                    if (j < s.length() - 1 && isdigit(s[j + 1])) {
                        b++;
                    } else if (j < s.length() - 1 && isalpha(s[j + 1])) {
                        if (s[j] > s[j + 1]) {
                            b++;
                        }
                    }
                } else if (s[j] >= 'A' && s[j] <= 'Z') {
                    b++;
                } else if (s[j] >= '0' && s[j] <= '9') {
                    if (j < s.length() - 1 && isdigit(s[j + 1])) {
                        if (s[j] > s[j + 1]) {
                            b++;
                        } else {
                            c++;
                        }
                    }
                }
            }
        }

        if (b > 0) {
            results.push_back("NO");
        } else {
            results.push_back("YES");
        }
    }

    for (const string &result : results) {
        cout << result << endl;
    }

    return 0;
}
