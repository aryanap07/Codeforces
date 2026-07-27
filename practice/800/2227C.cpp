#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> s6, s2, s3, s1;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x % 6 == 0)
                s6.push_back(x);
            else if (x % 2 == 0)
                s2.push_back(x);
            else if (x % 3 == 0)
                s3.push_back(x);
            else
                s1.push_back(x);
        }

        for (int x : s6) cout << x << " ";
        for (int x : s2) cout << x << " ";
        for (int x : s1) cout << x << " ";
        for (int x : s3) cout << x << " ";

        cout << '\n';
    }

    return 0;
}
