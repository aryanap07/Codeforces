#include <bits/stdc++.h>
using namespace std;

bool pricewin(const string& s, int n, int k) {
    vector<int> parity(k, 0);

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            parity[i % k] ^= 1;
        }
    }

    for (int x : parity) {
        if (x != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;

        cin >> n >> k;
        cin >> s;

        cout << (pricewin(s, n, k) ? "YES" : "NO") << '\n';
    }

    return 0;
}
