#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    int f = 0;
    for(ll i = 2;i * i <= n;i++){
        int cnt = 0;
        while(n % i == 0){
            n /= i;
            cnt++;
        }
        if(cnt > 0){
            if(f == 0){
                f = 1;
            }else{
                cout << " * ";

                }
                cout << i;
            }
            if(cnt > 1){
                cout << "^" << cnt;

            }
        }

    if(n > 0){
        if(f == 0){
            f = 1;
        }else{
            cout << " * ";

            }
    }
    cout << n;

}