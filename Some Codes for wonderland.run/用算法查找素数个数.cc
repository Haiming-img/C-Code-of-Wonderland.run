#include <bits/stdc++.h>
using namespace std;

int check(int x){
    for(int i = 2;i * i <= x;i++){
        if(x % i == 0){
            return 0;
        }
    }
    return 1;
}
const int N = 1e8 + 10;
bool flag[N];
int aaa = 0;

void init(){
    flag[1] = 1;
    for(int i = 2;i * i <= N;i++){
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
    aaa = n;
    init();
    for(int i = 1;i <= n;i++){
        aaa -= flag[i];
    }
    cout << aaa;
    return 0;
}
