#include<bits/stdc++.h>

using namespace std;
const int N = 110;
int a[N][N],sum[N][N];
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            char c;
            cin >> c;
            a[i][j] = c - '0';
            sum[i][j] = sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
        }
    }
    int mn = 99999999;
    for(int xa = 1;xa <= n;xa++){
        for(int ya = 1;ya <= m;ya++){
            for(int xb = xa;xb <= n;xb++){
                for(int yb = ya;yb <= m;yb++){
                    int chang = yb - ya + 1,kuan  = xb - xa + 1;
                    int s = sum[xb][yb] - sum[xa-1][yb] - sum[xb][ya-1] + sum[xa-1][ya-1];
                    if(s >= k){
                        mn = min(mn,chang * kuan);
                    }
                        
                    
                }
            }
        }
    }
    if(mn != 99999999){
        cout << mn << endl;
    }else{
        cout << 0 << endl;
    }

}