#include<bits/stdc++.h>
#include <cmath>

using namespace std;
const int N = 1e6+10;
priority_queue<int,vector<int>,greater<int>> xiao[N];

typedef long long ll;
int main(){
    int n,m;
    cin >> n >> m;
    ll ans = 9999999999999999;
    for(int i = 1;i <= m;i++){
        int x,y;
        cin >> x >> y;
        xiao[x].push(y);
    }
    for(int i = 1;i <= m;i++){
        ll cnt = xiao[1].size();
        ll sum = 0;
        priority_queue<int,vector<int>,greater<int>> qt;
        for(int j = 2;j <= n;j++){
            priority_queue<int,vector<int>,greater<int>> tmp = xiao[j];
            while(tmp.size() >= i){
                sum += tmp.top();
                tmp.pop();
                cnt++;
            }
            while(tmp.size() > 0){
                qt.push(tmp.top());
                tmp.pop();
                
            }
        }
        while(cnt < i){
            sum += qt.top();
            qt.pop();
            cnt++;
        }
        ans = min(ans,sum);
    }
    cout << ans << endl;
    return 0;
}