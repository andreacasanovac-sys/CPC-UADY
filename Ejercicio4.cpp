#include <bits/stdc++.h>
using namespace std;

int main(){
    int respuesta, x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;
    respuesta = (a * (x * x * x)) + (b * (x * x)) + (c * x) + d;
    cout << respuesta << "\n";
    return 0;
}