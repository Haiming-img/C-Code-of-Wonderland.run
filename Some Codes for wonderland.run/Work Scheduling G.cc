#include<bits/stdc++.h>

using namespace std;
const int N = 1e6+10;
int a[N],b[N];
struct node{
    int idx1,idx2;
};
node e[N];
bool cmp(node a,node b){
    return a.idx1 < b.idx1;
}
priority_queue<int,vector<int>,greater<int>> q;
int main(){
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> e[i].idx1 >> e[i].idx2;
    }
    long long sum = 0;
    

    sort(e + 1,e + 1 + n,cmp);
    for(int i = 1;i <= n;i++){
        if(e[i].idx1 > q.size()){
          q.push(e[i].idx2);
          sum += e[i].idx2;
        }else{
          if(e[i].idx2 > q.top()){
            sum -= q.top();
            q.pop();
            q.push(e[i].idx2);
            sum += e[i].idx2;
          }
        }
    }
    cout << sum;
}