// Worst Time Case

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin >> n >> q;
	
	vector<int> arr(n);
	
    for (int i = 0; i < n; i++) {
		cin >> arr[i];
    }
    
    while(q--){
    	int l,r;
    	cin >> l >> r;
    	
    	long long sum = 0;
    	
    	for(int i = l-1; i < r; i++){
    		sum += arr[i];
    	}
    	
    	cout << sum << "\n";
    }

    return 0;
}
