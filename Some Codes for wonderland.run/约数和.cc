#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll calc(int x){
    ll l = 1;
    ll sum = 0;
    while(l <= x){
        int t = x / l;
        int r = x/t;
        sum += (l + r) * (r-l+1) / 2 * t;
        l = r + 1;
    }
    return sum;
}
int main(){
    int n,m;
    cin >> n >> m;
    cout << calc(m) - calc(n-1) << endl;

}