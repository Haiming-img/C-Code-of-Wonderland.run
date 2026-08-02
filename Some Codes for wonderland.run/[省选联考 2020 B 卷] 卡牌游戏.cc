#include<bits/stdc++.h>

using namespace std;
long long a[10000010],s[10000010];

int main(){
    int n;
    cin >> n;
    long long b = 0;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
        s[i] = s[i-1] + a[i];

    }
    for(int i = 2;i <= n;i++){
        if(s[i] > 0){
            b += s[i];
        }
    }
    cout << b;

}