#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    if(n == 1) {
        cout << "1=1" << endl;
        return 0;
    }
    int p = 2;
    int x = n;
    cout << x << "=";
    int f = 0;
    while(x > 1){
        int cnt = 0;
        while(x % p == 0){
            x /= p;
            cnt++;
        }
        if(cnt > 0){
            if(f == 0){
                f = 1;
            }else{
                cout << "*";
            }
            cout << p;
        }
        if(cnt > 1){
            cout << "^" << cnt;
        }
        p++;
    }
    

}