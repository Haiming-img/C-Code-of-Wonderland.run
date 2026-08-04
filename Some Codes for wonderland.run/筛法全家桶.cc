#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
const int N = 1e7 + 10;
int mx[N];
int mn[N];
int cnt[N];
int flag[N];

void init(){
    flag[1] = 1;
    for(int i = 2;i < N;i++){
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

int check(int x){
    int ans = 1;
    for(int i = 2;i * i <= x;i++){
        int sum = 0;

        while(x % i == 0){
            x /= i;
            sum++;
        }
        ans *= (sum+1);
        
    }
    if(x > 1){
        ans *= 2;
    }
    return ans;
}
int main(){
    init();
    int n,q;
    cin >> n >> q;
    while(q--){
        int x;
        cin >> x;
        if(x==1){
            cout << "0 0 1 0 1" << endl;

        }else if(flag[x] == 0){
            cout << "1 1 2 " << x << " " << 1 << endl;
        }else{
            cout << "0" << " " << cnt[x] << " ";
            int num = check(x);
            cout << num << " " << mx[x] << " " << x / mn[x] << endl;
        }
        
    }
    

    

}
