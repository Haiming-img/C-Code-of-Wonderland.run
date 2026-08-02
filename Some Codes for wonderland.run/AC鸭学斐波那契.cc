#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1 << 31;
ll a[50];
ll Fibonacci(int n) {
	for(int i = 3; i <= n; i++) {
		a[i] = (a[i-1] % mod + a[i-2] % mod) % mod;
	}
	return a[n];
}
int main() {
	int n;
	cin >> n;
	a[1] = 1;
	a[2] = 1;
	int p = 2;
	bool f = 1;
	ll ans = Fibonacci(n);
	cout << ans;
	while(ans > 1) {
		while(ans % p ==0) {

			if(f == 1) {
				cout << "=";
				f = 0;

			} else {
				cout << "*";
				
			}
            cout << p;
			ans /= p;
		}
        p++;
        
	}
    
	return 0;
}
