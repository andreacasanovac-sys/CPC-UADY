#include <bits/stdc++.h>
using namespace std;
int main(){
    int casos;
    cin >> casos;
    for (int x = 0; x < casos; x++){
        int tam;
        cin >> tam;
        int prod[tam];
        int resultado = 1;
        int op = 0;
        int aux = 0;
        for (int y = 0; y < tam; y++){
            cin >> prod[y];
            if(prod[y] == 0){
                prod[y]+= 1;
                op++;
            }
        }

        for (int z = 0; z < tam; z++){
            if(prod[z] == -1){
                aux = z;
            }
            resultado *= prod[z];
        }
        if(resultado < 1){
            prod[aux] += 2;
            op += 2;
        }
        cout << op << "\n";
    }
    return 0;
}