#include<bits/stdc++.h>

using namespace std;
const int N = 1002002 + 10;
bool b[N];
int nxt[N];
int a,n;
void init(){
    for(int i = 1;i <= 1001;i ++){
        if(i * i >= a){
            for(int j = i * i;j < N;j += i * i){
                b[j] = 1;
            }
            
        }
    }
    for(int i = 1000000 + 500;i >= 1;i--){
        if(b[i] == 1){
            nxt[i] = i;
        }else{
            nxt[i] = nxt[i + 1];
        }
    }
}
int main(){
    cin >> a >> n;
    init();
    while(n--){
        int x;
        cin >> x;
        if(b[x] == 1){
            cout << "lucky" << endl;

        }else{
            cout << nxt[x] << endl;
        }
    }
    
}