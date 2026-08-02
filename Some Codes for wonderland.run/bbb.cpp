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
    
    int la = 1,ra = n;
    int lb = 1,rb = n;
    int cnt = 0;
    while(la <= ra){
        if(m[la] > t[lb]){
            cnt++;
            la++;
            lb++;
        }else if(m[la] < t[lb]){
            cnt--;
            ra--;
            lb++;
        }
        else{
            if(m[ra] > t[lb]){
                ra--;
                lb++;
                cnt++;

            }else{
                if(m[ra] < t[rb]) {
                    cnt--;
                    ra--;
                    lb++;
                }else{
                    ra--;
                    rb--;
                    cnt++;
                }
                    
                
                
            }
        }
    }
    cout << cnt * 200;

}