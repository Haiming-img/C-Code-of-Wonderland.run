#include<bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10;
struct sta{
    int p,c;
}a[N];
struct cars{
    int a,b,c;
}b[N];
bool cmp(sta x,sta y){
    return x.p < y.p;
}
bool cmp2(cars x,cars y){
    return x.c > y.c;
}
vector<cars> g[N];
int main(){
    int n,m,x;
    cin >> n >> m >> x;
    for(int i = 1;i <= n;i++){
        cin >> a[i].p >> a[i].c;

    }
    for(int i = 1;i <= m;i++){
        cin >> b[i].a >> b[i].b;
        b[i].c = b[i].a - b[i].b;
    }
    sort(a+1,a+n+1,cmp);
    sort(b+1,b+m+1,cmp2);
    int carl = 1,carr = m;
    int stl = 1,starr = n;
    while(carl <= carr){
        if(b[carl].c >= 0){
            if(g[stl].size() >=  a[stl].c){
                
                stl++;
            }
            g[stl].push_back(b[carl]);
            carl++;
        }else{
            if(g[starr].size() >=  a[starr].c){
                starr--;
            }
            g[starr].push_back(b[carr]);
            carr--;
        }
    }
    long long cnt = 0;
    for(int i = 1;i <= n;i++){    
        int len = g[i].size();
        for(int j = 0;j < len;j++){
            cars t = g[i][j];
            long long cnta = 2ll *a[i].p*t.a;
            long long cntb = 2ll*(x-a[i].p)*t.b;
            cnt += (cnta + cntb);
        }
    }
    cout <<cnt;
    

}            