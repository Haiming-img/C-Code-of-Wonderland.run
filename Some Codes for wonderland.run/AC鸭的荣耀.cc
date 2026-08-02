#include<bits/stdc++.h>

using namespace std;
long long a[100000010],sum[100000010];

int main(){
    int n,k;
    cin >> n >> k;
    for(int i = 1;i <= n - 1;i++){
        cin >> a[i];
        sum[i] = sum[i-1]+a[i];

         

    }
    long long mx = 0;
    for(int i = 1;i + k <= n;i++){
        int l = i;
        int r = i + k - 1;
        mx = max(mx,sum[r]-sum[l-1]);
        
    }
    cout << sum[n - 1] - mx;
    
}