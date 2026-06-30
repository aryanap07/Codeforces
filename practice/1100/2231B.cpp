#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<int> desc;

    for (int i = 0; i + 1 < n; i++) {
        if (a[i] > a[i + 1]) {
            desc.push_back(i);
        }
    }

    if (desc.empty()) {
        cout << "Yes\n";
        return;
    }

    int low = 0;
    for (int i : desc) {
        low = max(low, a[i] - a[i + 1]);
    }

    int high = INT_MAX;

    for (int i = 0; i + 1 < (int)desc.size(); i++) {
        int l = desc[i];
        int r = desc[i + 1];

        if (r == l + 1) {
            cout << "No\n";
            return;
        }

        int mx = 0;
        for (int j = l + 1; j < r; j++) {
            mx = max(mx, a[j + 1] - a[j]);
        }

        if (mx == 0) {
            cout << "No\n";
            return;
        }

        high = min(high, mx);
    }

    cout << (low <= high ? "Yes\n" : "No\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
