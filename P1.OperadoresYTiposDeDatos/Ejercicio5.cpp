#include <bits/stdc++.h>
using namespace std;
int main(){
    int respuesta;
    float a, b, techo, hola;
    cin >> a >> b;
    techo = a / b;
    respuesta = a / b;
    hola = techo - respuesta;
    if (hola > 0){
        respuesta += 1;
    }
    cout << respuesta << endl;
    return 0;
}
