#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        vector<bool> seen(26, false);
        int balloons = 0;

        for (char c : s) {
            int index = c - 'A';

            if (!seen[index]) {
                balloons += 2;
                seen[index] = true;
            } else {
                ++balloons;
            }
        }

        cout << balloons << '\n';
    }

    return 0;
}
