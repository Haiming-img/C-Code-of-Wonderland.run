#include<bits/stdc++.h>

using namespace std;
const int N = 1e6+10;
int a[N],b[N];
struct node{
    int pic,day,cnt;
};
node e[N];
bool cmp(node x,node y){
    return x.day < y.day;
}
bool operator < (node x,node y){
    return x.pic > y.pic;     
}
priority_queue<node> q;
int main(){
    int x,n;
    cin >> x >> n;
    for(int i = 1;i <= n;i++){
        cin >> e[i].pic >> e[i].day >> e[i].cnt;
    }
    int idx = 1;
    

    sort(e + 1,e + 1 + n,cmp);
    long long sum = 0;
    for(int i = x;i >=1 ;i--){
        while(idx <= n && e[idx].day >= i){
            q.push(e[idx]);
            idx++;
        }if(q.empty()){
            cout << -1;  
            return 0;
        }
        node t = q.top();
        q.pop();
        t.cnt++;
        
        sum += t.pic;
        if(t.cnt > 0){
            q.push(t);
        }
    }
    cout << sum;
}