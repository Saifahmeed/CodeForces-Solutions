    #include <iostream>
    #include <vector>
    using namespace std;

    int main() {
        int n, S;
        cin >> n >> S;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        for (int mask = 0; mask < (1 << n); ++mask) {
            long long sum_of_this_subset = 0;
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    sum_of_this_subset += arr[i];
                }
            }
            if (sum_of_this_subset == S) {
                cout << "YES" << endl;
                return 0;
            }
        }

        cout << "NO" << endl;
        return 0;
    }
