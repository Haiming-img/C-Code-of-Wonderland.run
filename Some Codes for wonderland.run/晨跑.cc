#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull lcm(ull a,ull b){
    return a / __gcd(a,b) * b;
}
int main(){
    ull a,b,c;
    cin >> a >> b >> c;
    ull ans = lcm(lcm(a,b),c);
    cout << ans << endl;
    
}
