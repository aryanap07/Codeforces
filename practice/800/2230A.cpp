#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        if (b >= 3 * a) {
            cout << n * a << '\n';
        } else {
            cout << (n / 3) * b + min((n % 3) * a, b) << '\n';
        }
    }

    return 0;
}
