#include<bits/stdc++.h>
#include <ctime>
#include <functional>

using namespace std;
const int N = 1e5 + 10;

int m[N];
int t[N];
priority_queue<int,vector<int>,greater<int>> small;
bool cmp(int a,int b){
    return a > b;
    
}
int main(){
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> m[i];
    }
    for(int i = 1;i <= n;i++){
        cin >> t[i];
    }
    sort(m + 1,m + n + 1,cmp);
    sort(t + 1,t + n + 1,greater<int>());
    int ml,mr,tl,tr;
    ml = 1,mr = n;
    tl = 1,tr = n;
    int cnt = 0;

    while(ml <= mr){
        if(m[ml] >t[tl]){
            cnt++;
            ml++;
            tl++;

        }else{
            mr--;
            tl++;

        }
    }
    cout << cnt;
}