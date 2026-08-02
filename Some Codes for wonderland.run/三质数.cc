#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool ip(long long a){
    if(a < 2){
        return false;
    }
    for(int i = 2;i * i <= a;i++){
        if(a % i == 0){
            return false;
        }
        
    }
    return true;
}
int main(){
    long long n;
    while(cin >> n){
        long long r = sqrt(n);
        if(r * r == n && ip(r)){
            cout << "YES"<<endl;

        }else{
            cout << "NO" << endl;

        }
    }
}