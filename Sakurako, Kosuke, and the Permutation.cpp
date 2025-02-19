#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        vector<bool> visited(n, false);
        int swaps_needed = 0;

        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                int cycle_length = 0;
                int current = i;

                // Count the length of the cycle
                while (!visited[current]) {
                    visited[current] = true;
                    cycle_length++;
                    current = p[current] - 1;  // Move to the next index in the permutation
                }

                // If cycle length is greater than 2, we need (cycle_length - 1) swaps
                if (cycle_length > 2) {
                    swaps_needed += (cycle_length - 1);
                }
            }
        }

        cout << swaps_needed << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
