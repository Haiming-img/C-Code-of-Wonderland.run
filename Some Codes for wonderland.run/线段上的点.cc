#include<bits/stdc++.h>

using namespace std;
const int N = 1e6 +10;

int a[N];
int b1[N];

int n,m;
int efcz(int b){
    int l = 1,r = n,ret = -1;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(a[mid] >= b){
            ret = mid;
            r = mid - 1;
        }else{
            l = mid + 1;

        }
    }
    return ret;
    
}
int efcz1(int b){
    int l = 1,r = n,ret = -1;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(a[mid] > b){
            ret = mid;

            r = mid - 1;
        }else{
            l = mid + 1;

        }
    }
    return ret;

}
int main(){
    int t;
    cin >> t;
    for(int k = 1;k <= t;k++){
        cout << "Case " << k << ":" << endl;
        cin >> n >> m;
        for(int i = 1;i <= n;i++){
            cin >> a[i];

        }
        for(int i = 1;i <= m;i++){
            int l,r;
            cin >> l >> r;
            int idx1 = efcz(l);
            int idx2 = efcz1(r);
            if(idx1 == -1){
                cout << "0" << endl;

            }else if(idx2 == -1){
                cout << n + 1 - idx1<< endl;

            }
            else{
                cout << idx2 - idx1 << endl;
            }
        }
    }
}