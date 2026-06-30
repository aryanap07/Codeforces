#include <iostream>
#include <algorithm>

using namespace std;

using int64 = long long;

int64 ceil_div(int64 a, int64 b) {
    return (a + b - 1) / b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int64 n, x, y, z;
        cin >> n >> x >> y >> z;

        // Nikita does not use AI
        int64 without_ai = ceil_div(n, x + y);

        // Nikita uses AI
        int64 with_ai;

        if (x * z >= n) {
            // Maxim finishes before AI setup is complete
            with_ai = ceil_div(n, x);
        } else {
            int64 remaining = n - x * z;
            with_ai = z + ceil_div(remaining, x + 10 * y);
        }

        cout << min(without_ai, with_ai) << '\n';
    }

    return 0;
}
