#include<bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
struct node{
    int t,idx;
};
node a[N];
bool cmp(node a,node b){
    return a.t < b.t;
}



int main(){
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i].t;
        a[i].idx = i;
    }
    sort(a + 1,a + n + 1,cmp);
    long long sum = 0;
    for(int i = 1;i <= n;i++){
        cout << a[i].idx << " ";
        sum += (n - i) * a[i].t;

    }
    cout << endl;
    printf("%.2lf",1.0 * sum / n);
}