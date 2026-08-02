#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int cnt[N];
bool flag[N];
void init(){
    flag[1] = 1;
    for(int i = 2;i < N;i++){
        if(flag[i] == 0){
            cnt[i] = 1;
            for(int j = 2 * i;j <= N;j += i){
                flag[j] = 1;
                cnt[j]++;
            }
        }
        
    }
}
int main(){
    init();
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        int s;
        cin >> s;
        if(cnt[s] == 2){
            cout << "1" << endl;
        }else{
            cout << "0" << endl;
        }
    }
}
