#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, x, y, z;
    cin >> x >> y >> z;
    cin >> a >> b >> c;
    
    if((a >= x) && ((a + b - x) >= y) && ((a + b + c - x - y) >= z)){

     cout << "YES" << endl;

    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}