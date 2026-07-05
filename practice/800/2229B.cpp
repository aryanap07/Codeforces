#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                swap(a[i], b[i]);
            }
        }

        i64 sum = 0;
        int mx = 0;

        for (int i = 0; i < n; i++) {
            sum += b[i];
            mx = max(mx, a[i]);
        }

        cout << sum + mx << '\n';
    }

    return 0;
}
