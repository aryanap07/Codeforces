// Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long sum = 0, ans = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        sum = max(x, sum + x);
        ans = max(ans, sum);
    }

    cout << ans << '\n';

    return 0;
}
