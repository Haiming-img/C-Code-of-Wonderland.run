#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e6 + 10;
bool flag[N];
bool check(int n){
    if(n <= 1){
        return 0;
    }
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){ 
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    for(int i = 2;i * i<= n;i++){
        int j = n / i;
        if(j * i == n && check(i) && check(j)){
            cout << j;
            return 0;
        }

    }
    
    return 0;
}