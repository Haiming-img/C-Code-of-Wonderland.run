#include<bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10;
struct node{
    int l,r;
};
node e[N];
bool cmp(node a,node b){
    return a.r < b.r;
}
int main(){
    int n;
    cin >> n ;
    for(int i = 1;i <= n;i++){
        cin >> e[i].l >> e[i].r;
    }
    sort(e + 1,e + 1 + n,cmp);  
    int cnt = 0;
    int lst = e[1].r;;
    int sum = 1;

    for(int i = 2;i <= n;i++){
        if(e[i].l >= lst){
            
            sum++;
            lst = e[i].r;
        }
        
        
    }
    cout << sum;
}