#include <bits/stdc++.h>
using namespace std;
int main (){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    long long t, a, b, c, d;
    cin >> t;
    for(long long x = 0; x < t; x++){

        cin >> a >> b >> c >> d;

        if(a >= c && b <= d){//
            cout << b - a << "\n";

        }else if(a <= c && b >= d){
            cout << d - c << "\n";

        }else if(a <= c && b <= d && b >= c){
            cout << b - c << "\n";

        }else if(a >= c && b >= d && d >= a){
            cout << d - a << "\n";

        }
        else{
            cout << 0 << "\n";
        }
    }
    return 0;
}   