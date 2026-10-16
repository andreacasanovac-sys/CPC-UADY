#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, a, b, c;
    cin >> t;
    for (int x = 0; x < t; x++){
        cin >> a >> b >> c;
        if((a + b >= 10) || (b + c >= 10) || (a + c >= 10)){
            cout << "YES" <<"\n";
        }else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}