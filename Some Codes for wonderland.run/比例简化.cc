#include<bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;

int main(){
    int a,b,l;
    cin >> a >> b >> l;
    double mn = 100000000;
    int fz,fm;
    for(int a1 = 1;a1 <= l;a1++){
        for(int b1 = 1;b1 <= l;b1++){
            double c1 = a1 * 1.0 / b1;
            double c2 = a * 1.0 / b;
            if(__gcd(a1,b1) == 1&&c1 >= c2 && c1 - c2 < mn){
                mn = c1 - c2;
                fz = a1;
                fm = b1;
            }
        }
    }
    cout << fz << " " << fm << endl;
}

