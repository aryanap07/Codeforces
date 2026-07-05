#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        i64 ans = 0;
        for (int i = 0; i < n; ++i) {
            if (ans > a[i]) ans += a[i];
            else ans = a[i];
        }
        cout << ans << '\n';
    }
    return 0;
}
