#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int current = 0;
        int longest = 0;

        for (char c : s) {
            if (c == '#') {
                current++;
                longest = max(longest, current);
            } else {
                current = 0;
            }
        }

        cout << (longest + 1) / 2 << '\n';
    }

    return 0;
}
