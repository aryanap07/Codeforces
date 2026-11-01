// O (n*m)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<long long> arr(n,0);
    vector<long long> ans(n,0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (m--) {
        int l, r, x;
        cin >> l >> r >> x;

        for(int i = l-1; i < r; i++){
        	arr[i] += x;
        }
    }
    
    for (long long a : arr) {
        cout << a << ' ';
    }

    return 0;
}
