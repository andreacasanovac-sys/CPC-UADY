#include <bits/stdc++.h>
using namespace std;
int main(){
    int caja, alto, ancho, fondo, maxCajas;
    cin >> caja >> alto >> ancho >> fondo;
    maxCajas = (alto / caja) * (ancho / caja) * (fondo / caja);
    cout << maxCajas << endl;
    return 0;
}