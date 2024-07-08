#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to find the center of the Manhattan circle
pair<int, int> findCircleCenter(int n, int m, vector<string>& grid) {
    int min_x = n, min_y = m, max_x = 0, max_y = 0;

    // Find the minimum bounding rectangle enclosing all '#' cells
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                min_x = min(min_x, i);
                min_y = min(min_y, j);
                max_x = max(max_x, i);
                max_y = max(max_y, j);
            }
        }
    }

    // Calculate the center of the bounding rectangle
    int center_x = (min_x + max_x) / 2;
    int center_y = (min_y + max_y) / 2;

    // Find the maximum r such that all '#' cells are within Manhattan distance r from (center_x, center_y)
    int r = 0;
    for (int i = min_x; i <= max_x; ++i) {
        for (int j = min_y; j <= max_y; ++j) {
            if (grid[i][j] == '#') {
                r = max(r, abs(center_x - i) + abs(center_y - j));
            }
        }
    }

    return make_pair(center_x + 1, center_y + 1); // Convert 0-based index to 1-based index
}

int main() {
    int t;
    cin >> t;

    vector<pair<int, int>> centers;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }

        // Find and store the center of the Manhattan circle
        pair<int, int> center = findCircleCenter(n, m, grid);
        centers.push_back(center);
    }

    // Output the count of centers
    for (auto center : centers) {
        cout << center.first << " " << center.second << endl;
    }

    return 0;
}
