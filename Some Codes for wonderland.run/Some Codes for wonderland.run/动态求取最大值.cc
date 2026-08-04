#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
const int N = 1e6 + 10;

priority_queue<int> big;
priority_queue<int,vector<int>,greater<int>> small;

int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x == 1){
            int y;
            cin >> y;
            big.push(y);
        }else{
            cout << big.top() << endl;
            big.pop();
        }
    }
}
