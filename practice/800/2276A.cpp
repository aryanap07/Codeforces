#include <bits/stdc++.h>
using namespace std;

int max_sandwich(int a, int b) {
    if (a <= b)
        return -1;

    return min(b, a - b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        cout << max_sandwich(a, b) << '\n';
    }

    return 0;
}
