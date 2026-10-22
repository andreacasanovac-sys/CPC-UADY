#include <bits/stdc++.h>
using namespace std;

int main () {
    int completo[5];
    int faltante[4];
    int juguete;

    for (int x = 0; x < 5; x++) {
        cin >> completo[x];
    }
    for (int y = 0; y < 4; y++) {
        cin >> faltante[y];
    }


    for (int w = 0; w < 5; w++) {
        bool encontrado = false;

        for (int z = 0; z < 4; z++) {
            if (completo[w] == faltante[z]) {
                encontrado = true;
                break; 
            }
        }
        
        if (!encontrado) {
            juguete = comp[w];
            break;
        }
    }

    cout << juguete << "\n";
    return 0;
}