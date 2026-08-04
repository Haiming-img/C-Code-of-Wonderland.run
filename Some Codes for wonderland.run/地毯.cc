#include<bits/stdc++.h>

using namespace std;
const int N = 1010;
int a[N][N],b[N][N];
int main(){
    int n,m;
    cin >> n >> m;
    while(m--){
       int x1,y1,x2,y2;
       cin >> x1 >> y1 >> x2 >> y2;
       a[x1][y1]++;
       a[x2+1][y2+1]++;
       a[x2+1][y1]--;
       a[x1][y2+1]--;
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            b[i][j] = b[i-1][j]+b[i][j-1]-b[i-1][j-1]+a[i][j];
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}