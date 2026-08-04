#include<bits/stdc++.h>

using namespace std;
const int N = 1e8 + 10;
int a[N];

int main(){
    int system = 0;
    int n;
    while(cin >> n){
        if(a[system] >= n){
            for(int i = 1;i <= system;i++){
                if(a[i] >= n){
                    a[i] = n;
                    break;
                }
            }
        }else{
            system++;
            a[system] = n;

        }
    }
    cout << system;

}