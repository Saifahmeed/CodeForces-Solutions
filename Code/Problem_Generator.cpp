    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int t,n,m;
        cin >> t;
        vector <int> summ;
        vector <char> vecc = {'A','B','C','D','E','F','G'};
        while(t--){
            cin >> n >>m;
            vector <char> vec(n);
            for (int i = 0; i < n; i++) {
                cin >> vec[i];
            }
            unordered_map<char, int> chars;
            for (char c : vecc) {
                chars[c] = 0;
            }
            for (char c : vec) {
                    chars[c]++;
            }
            int sum=0;
            for (auto it = chars.begin(); it != chars.end(); it++) {
                if (it->second < m) {
                    sum = sum + (m-it->second);
                }
            }
            summ.push_back(sum);
        }
        for (int sum : summ){
            cout << sum << endl;
        }
    return 0;
}