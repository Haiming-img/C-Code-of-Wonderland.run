#include<bits/stdc++.h>
using namespace std;
long long a,b;
int lcm(int a,int b){
	while(a % b){
		int gong = a % b;
		a = b;
		b = gong;
	}
    return b;

}
int main(){
	cin >> a >> b;
	//int aaa = a * b;
    cout << a * b / lcm(a,b);
		
}