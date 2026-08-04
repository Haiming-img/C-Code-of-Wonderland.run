#include<bits/stdc++.h>

using namespace std;
priority_queue<int,vector<int>,greater<int>> small;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        int x;
        cin >> x;
        small.push(x);
    }
    while(small.size()>1){
        int x1,x2;
        x1 = small.top();
        small.pop();
        x2 = small.top();
        small.pop();
        small.push(x1 + x2);

        ans += x1 + x2;

    }
    cout << ans;
}