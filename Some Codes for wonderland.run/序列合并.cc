#include<bits/stdc++.h>

using namespace std;
const int N = 1e6+10;
int a[N],b[N];
struct node{
    int sum,idx1,idx2;
};
node e[N];
bool operator<(node a,node b){
    return a.sum > b.sum;
}
priority_queue<node> q;
int main(){
   int n;
   cin >> n;
   for(int i = 1;i <= n;i++){
        cin >> a[i];
   }
   for(int i = 1;i <= n;i++){
        cin >> b[i];
   }
   for(int i = 1;i <= n;i++){

        q.push({a[i] + b[1],i,1});
        

   }
   for(int i = 1;i <= n;i++){
    cout << q.top().sum << " ";
        int idx1 = q.top().idx1;
        int idx2 = q.top().idx2;
        q.pop();
        q.push({a[idx1] + b[idx2 + 1],idx1,idx2 + 1});
   }
}