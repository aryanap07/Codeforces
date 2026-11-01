#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    vector<long long> arr(n);
    vector<long long> diff(n + 1, 0);
    vector<long long> prefix(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (m--) {
        int l, r;
        long long x;
        cin >> l >> r >> x;

        diff[l - 1] += x;
        diff[r] -= x;
    }

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += diff[i];
        arr[i] += sum;
        prefix[i + 1] = prefix[i] + arr[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        cout << prefix[r] - prefix[l - 1] << '\n';
    }

    return 0;
}
