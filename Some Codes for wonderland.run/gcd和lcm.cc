#include<bits/stdc++.h>
using namespace std;
long long a,b;
int gcd(int a,int b){
	while(a % b){
		int gong = a % b;
		a = b;
		b = gong;
	}
    return b;
}
int lcm(int a,int b){
    return a * b / gcd(a,b);
}
int main(){
	int x,y,cnt = 0;
	cin >> x >> y;
    for(int p = 1;p <= y;p++){
        int q = x * y /p;
        if(gcd(p,q) == x && lcm(p,q) == y){
            cnt++;
        }
    }
    cout << cnt << endl;
}