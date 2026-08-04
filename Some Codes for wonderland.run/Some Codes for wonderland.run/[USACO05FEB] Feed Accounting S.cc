#include<bits/stdc++.h>

using namespace std;
const int N = 100000010;
int a[N];
int main(){
    long long c,f1,f2,d;
    cin >> c >> f1 >> f2 >> d;
    for(int i = 1; i <= c;i++){
        int l,r;
        cin >> l >> r;
        a[l]++;
        a[r+1]--;
    }
    for(int i = 1;i <= d;i++){
        a[i] += a[i-1];
    }
    long long ans = f2;

    for(int i = d;i >= 1;i--){
        ans += a[i];
        if(ans == f1){
            cout << i << endl;
            break;
        }
    }
    return 0;

    
}