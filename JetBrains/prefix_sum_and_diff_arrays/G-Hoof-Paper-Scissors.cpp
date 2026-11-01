#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<char> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> prefH(n + 1, 0), prefP(n + 1, 0), prefS(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefH[i + 1] = prefH[i] + (arr[i] == 'S');
        prefP[i + 1] = prefP[i] + (arr[i] == 'H');
        prefS[i + 1] = prefS[i] + (arr[i] == 'P');
    }

    int ans = 0;

    for (int i = 0; i <= n; i++) {
        int prefix = max({prefH[i], prefP[i], prefS[i]});

        int suffix = max({
            prefH[n] - prefH[i],
            prefP[n] - prefP[i],
            prefS[n] - prefS[i]
        });

        ans = max(ans, prefix + suffix);
    }

    cout << ans << '\n';

    return 0;
}
