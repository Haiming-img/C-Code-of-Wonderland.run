#include<bits/stdc++.h>

using namespace std;
const int N = 1e7 + 10;

bool flag[N];
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
    init();
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x == 1||flag[x] == 0){
            cout << "0" << endl;

        }else{
            for(int i = 2;i * i <= x;i++){
                if(x % i == 0){
                    cout << x / i << endl;
                    break;
                }
                
                
            }
        }
    }


}