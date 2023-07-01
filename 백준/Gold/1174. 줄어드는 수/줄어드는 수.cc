#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    // Setting for improved input/output performance
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Vector v stores numbers from 0 to 9 in reverse order
    vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n;
    cin >> n;

    vector<long long> ans; // Vector to store all possible combinations

    // Iterate from 1 to 2^10 - 1
    for (int i = 1; i < (1 << 10); i++) {
        long long sum = 0;

        // Check the bits of i to generate combinations
        for (int j = 0; j < 10; j++) {
            if (i & (1 << j)) {
                sum = sum * 10 + v[j];
            }
        }
        ans.push_back(sum); // Store the generated combination in the vector
    }

    sort(ans.begin(), ans.end()); // Sort the combinations

    if (n > ans.size()) {
        cout << -1 << '\n';
    } else {
        cout << ans[n - 1] << '\n'; // Print the nth smallest combination
    }

    return 0;
}
