#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        long long m;

        cin >> n >> k >> m;

        if (k > m) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        for (int i = 1; i <= n; ++i) {
            if (i % k == 0)
                cout << m - k + 1;
            else
                cout << 1;

            cout << (i == n ? '\n' : ' ');
        }
    }

    return 0;
}
