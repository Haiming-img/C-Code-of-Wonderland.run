#include<bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10;
bool flag[N];
int mn[N];
int mx[N];
int cnt[N];
void init(){
    flag[1] = 1;
    for(int i =2;i < N;i++){
        if(flag[i] == 0){
            mn[i] = i;
            mx[i] = i;
            cnt[i] = 1;
            for(int j = 2 * i;j < N;j += i){
                flag[j] = 1;
                if(mn[j] == 0){
                    mn[j] = i;
                }
                mx[j] = i;
                cnt[j]++;

            }
        }
    }
}
int main(){
    int n, B;
    cin >> n >> B;
    init();

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(mx[i] <= B){
            ans++;
        }
    }
    cout << ans;
    return 0;
}