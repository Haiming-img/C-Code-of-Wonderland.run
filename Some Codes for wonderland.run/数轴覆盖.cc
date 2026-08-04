#include<bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10;
struct node{
    int l,r;
};
node e[N];
bool cmp(node a,node b){
    if(a.l == b.l){
        return a.r < b.r;
    }else{
        return a.l < b.l;
    }   
}
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        cin >> e[i].l >> e[i].r;
    }
    sort(e + 1,e + 1 + n,cmp);  
    if(e[1].l > 1){
        cout << "-1" << endl;
        return 0;
    }
    int cnt = 0;
    int lst;
    int system = 1;
    while(lst < m){
        if(system > n){
            cout << "-1" << endl;
            return 0;
        }
        int mx = 0;
        while(system <= n && e[system].l <= lst + 1){
            mx = max(mx,e[system].r);
            system++;
        }
        lst = mx;
        cnt++;
    }   
    cout << cnt;
   
}