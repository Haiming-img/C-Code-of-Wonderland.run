#include<bits/stdc++.h>
#include <cstring>
#include <valarray>

using namespace std;

const int N = 1e6 + 10;
int a[N];
string s;
bool check(int x){
    int len = s.size();
    int t = len / x;
    for(int i = 0;i < len - t;i++){
        if(s[i] != s[i+t]){
            return 0;
        }
    }return 1;

}
int main(){
    
    while(cin >> s){
        if(s == "."){
            break;
        }
        map<char,int>mp;
        int len = s.size();

        

        for(int i = 0;i < len;i++){
            mp[s[i]]++;
            
        }
        memset(a, 0, sizeof(a));
        
        

        int g = 0;
        for(auto i : mp){
            g = __gcd(g,i.second);

        }
        int idx = 1;
        for(int i = 1;i * i <= g;i++){
            if(g % i == 0){
                a[idx] = i;
                idx++;
                if(i * i != g){
                    a[idx] = g / i;
                    idx++;

                }
            }
        }
        sort(a+1,a+idx,greater<int>());
        for(int i = 1;i <= idx - 1;i++){
            if(check(a[i])){
                cout << a[i] << endl;
                break;
            }
        }
    }
    

}