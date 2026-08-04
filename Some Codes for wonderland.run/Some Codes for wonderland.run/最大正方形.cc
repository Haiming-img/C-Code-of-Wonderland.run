#include<bits/stdc++.h>

using namespace std;
const int N = 110;
int a[N][N],sum[N][N];
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
            sum[i][j] = sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
        }
    }
    int mx = 0;
    for(int len = 1;len <= min(n,m);len++){
        for(int x2 = len;x2 <= n;x2++){
            for(int y2 = len; y2 <= m; y2++) {  
                if(sum[x2][y2] - sum[x2][y2 - len] - sum[x2 - len][y2] + sum[x2 - len][y2 - len] == len * len) {
                    mx = max(mx,len);
                }
            }
        }
    }               
    cout << mx << endl;
}