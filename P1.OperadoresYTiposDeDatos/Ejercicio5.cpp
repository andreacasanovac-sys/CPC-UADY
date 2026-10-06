#include <bits/stdc++.h>
using namespace std;
int main(){
    int respuesta;
    float a, b, techo, aux;
    cin >> a >> b;
    techo = a / b;
    respuesta = a / b;
    aux = techo - respuesta;
    if (aux > 0){
        respuesta += 1;
    }
    cout << respuesta << endl;
    return 0;
}
