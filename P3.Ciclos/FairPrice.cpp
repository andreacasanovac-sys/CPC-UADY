#include <bits/stdc++.h>
using namespace std;
int main(){
    int nPremios, cMax, premios, pAux;
    cin >> nPremios >> cMax;
    pAux = 0;
    for (int x = 0; x < nPremios; x++){
        cin >> premios;
        if(pAux < premios && premios <= cMax){
            pAux = premios;
        }
    }
    cout << pAux << "\n";
    return 0;
}