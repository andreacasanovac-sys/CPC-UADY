#include <bits/stdc++.h>
using namespace std;
int main(){
    int caja, alto, ancho, fondo, maxCajas;
    cin >> caja >> alto >> ancho >> fondo;
    if (alto < caja || ancho < caja || fondo < caja){
        cout << 0 << endl;
        return 0;
    }
    
    if (alto > fondo && alto > ancho){
        maxCajas = alto / caja;
    }

    if (fondo > alto && fondo > ancho){
        maxCajas = fondo / caja;
    }

    if (ancho > alto && ancho > fondo){
        maxCajas = ancho / caja;
    }

    if (ancho == alto && alto == fondo && ancho == fondo){
        maxCajas = (alto * ancho * fondo) / caja;
    }
    cout << maxCajas << endl;

    return 0;
}