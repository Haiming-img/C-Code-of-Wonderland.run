#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e6 + 10;
bool flag[N];
void init(){
    flag[1] = 1;
    for(int i = 2;i * i < N;i++){
        if(flag[i] == 0){
            for(int j = 2 * i;j < N;j += i){
                flag[j] = 1;
            }
        }
        
    }
}

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    int mx = 0;
    init();
    
    for(int i = 2;i <= n;i++){
        if(flag[i] == 1){
            cnt++;
        }else{
            cnt = 0;
        }
        mx = max(mx,cnt);

    }
    cout << mx << endl;
}