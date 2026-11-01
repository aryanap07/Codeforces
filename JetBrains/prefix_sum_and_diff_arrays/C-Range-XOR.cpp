#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        prefix[i] = prefix[i - 1] ^ x;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        cout << (prefix[r] ^ prefix[l - 1]) << '\n';
    }

    return 0;
}
