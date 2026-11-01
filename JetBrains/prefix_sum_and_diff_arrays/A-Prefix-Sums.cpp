#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> arr(n);
    vector<long long> ans(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        ans[i] = sum;
    }

    for (long long x : ans) {
        cout << x << ' ';
    }

    cout << '\n';

    return 0;
}
