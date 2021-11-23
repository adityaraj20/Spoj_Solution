#include <bits/stdc++.h>
using namespace std;

int rev (int n) {
	int r =0;
	while (n){
	r = r*10 + (n%10);
	n /= 10;
	}
	return r;
}

int main() {
	// your code goes here
	int t , x , y;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		int ans = rev(rev(x)+rev(y));
		cout << ans << endl;
	}
	return 0;
}
