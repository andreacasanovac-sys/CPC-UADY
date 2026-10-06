#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, c;
    float b;
    cin >> a >> c >> b;
    /*a es el precio del alfajor, b el de los dulces y c el tamaño del billete.*/
    int cambio = (-1 * a) + c;
    int aux = cambio / b;
    float dulces = cambio / b;

    if(dulces - aux != 0){
        cout << "N" << "\n";
    }
    else {
        cout << "S" << "\n";
    }

    return 0;
}