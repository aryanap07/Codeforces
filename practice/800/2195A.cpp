#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool found = false;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(a == 67) found = true;
        }
        cout << (found ? "YES" : "NO") << "\n";
    }
    return 0;
}
