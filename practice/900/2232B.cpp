#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long prefixSum = 0;
        long long answer = LLONG_MAX;

        vector<long long> result(n);

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            prefixSum += x;
            answer = min(answer, prefixSum / (i + 1));

            result[i] = answer;
        }

        for (int i = 0; i < n; i++) {
            if (i) cout << ' ';
            cout << result[i];
        }
        cout << '\n';
    }

    return 0;
}
