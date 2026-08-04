#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e16 + 10;
ll mod = 1e11;
int main(){
    ll n;
    cin >> n;
    ll ans = 1;
    for(ll i = 1;i <= n;i++){
        ans *= i;
        while(ans % 10 == 0){
            ans /= 10;
        }
        ans %= mod;

    }
    cout << ans % 10 << endl;
}
