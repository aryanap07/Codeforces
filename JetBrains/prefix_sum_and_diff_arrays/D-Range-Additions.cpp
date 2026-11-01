// O (n+m)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<long long> arr(n);
    vector<long long> diff(n + 1, 0);

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

        cout << arr[i] << ' ';
    }

    cout << '\n';

    return 0;
}
