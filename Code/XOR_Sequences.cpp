#include <iostream>
#include <vector>
using namespace std;

int longestConsecutiveSegment(int x, int y) {
    int max_length = 0;
    int current_length = 0;
    int xor_result = x ^ y;

    // Find the number of bits in an integer
    int num_bits = sizeof(xor_result) * 8;

    for (int i = 0; i < num_bits; ++i) {
        if ((xor_result >> i) & 1) {
            current_length++;
            max_length = max(max_length, current_length);
        } else {
            current_length = 0; // Reset length if bit is not set
        }
    }

    return max_length + 1; // Add 1 to include the last bit
}

int main() {
    int t;
    cin >> t;
    vector<int> out(t);

    for (int i = 0; i < t; ++i) {
        int x, y;
        cin >> x >> y;
        out[i] = longestConsecutiveSegment(x, y);
    }

    // Output the results using cout
    for (int i = 0; i < t; ++i) {
        cout << out[i] << endl;
    }

    return 0;
}
