#include<bits/stdc++.h>

using namespace std;
const int N = 1e6+10;
int s[N],cnt[N];
struct node{
    int zs,zw;
};
node a[N];
bool cmp(node x,node y){
    return x.zw > y.zw;
}
int main(){

    int m,n,k;
    cin >> m >> n >> k;
    for(int i = 1;i <= n;i++){
        cin >> a[i].zs;
    }
    for(int i = 1;i <= n;i++){
        cin >> a[i].zw;
    }
    sort(a+1,a+n+1,cmp);
    int idx = 1;
    for(int i = 1;i <= n;i++){
        if(s[a[i].zs] >= k){
            continue;
        }
        s[a[i].zs] += a[i].zw;
        cnt[a[i].zs]++;
        if(cnt[a[i].zs] > cnt[idx]){
            idx = a[i].zs;
        }
    }
    int sum = 0;
    for(int i = 1;i <= m;i++){
        if(s[i] < k){
            cout << -1;
            return 0;
        }
        sum += cnt[i];
    }
    int sum2 = 0;
    for(int i = 1;i <= m;i++){
        if(a[i].zs != idx){
            sum2++;

        }
    }
    if(sum - cnt[idx] >= cnt[idx] - 1){
        cout << sum << endl;
    }else if(sum2 >= cnt[idx] - 1){
        cout << cnt[idx] + cnt[idx] - 1 << endl;
        
    }else{
      cout << -1;

    }
    
}