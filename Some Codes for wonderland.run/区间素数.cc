#include<bits/stdc++.h>

using namespace std;
const int N = 5e6 + 10;
int a[N+1],sum[N+1];
int main(){
    int n;
    cin >> n;
    a[1] = 1;
    for(int i = 2;i * i <= N;i++){
        if(a[i] == 0){
            for(int j = i * 2;j <= N;j += i){
                a[j] = 1;
            }
        }
    }
    for(int i = 1;i <= N;i++){
        a[i] += a[i-1];
    }
    for(int i = 1;i <= n;i++){
        int l,r;
        cin >> l >> r;
        cout << r - l + 1 - (a[r] - a[l-1] )<< endl;
    }
        
    
}

