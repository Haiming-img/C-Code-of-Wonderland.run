#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll opt,n,mod,k;
        cin >> opt >> n >> mod >> k;
        ll x = n % mod;
        if(opt == 0){
            if(x > k){
                cout << n + mod - (x - k) << endl;
            }else if(x < k){
                cout << n + (k - x) << endl;
            }else{
                cout << n << endl;;
            }
        }else{
            if(x > k){
                cout << n - (x - k)<< endl;
            }else if(x < k){
                cout << n - mod + (k - x) << endl;
            }else{
                cout << n << endl;
            }
        }

    }
}