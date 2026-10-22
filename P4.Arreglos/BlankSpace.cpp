#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int casos, blank, aux;
    cin >> casos;
    for(int x = 0; x < casos; x++){
        int tam;
        blank = 0;
        cin >> tam;
        aux = 0;
        int palabra[tam];
        for (int y = 0; y < tam; y++){
            cin >> palabra[y];
        }

        if(tam == 1 && palabra[0] == 0){
            cout << 1 << "\n";
        }else if(tam == 1 && palabra[0] == 1){ 
            cout << 0 << "\n";

        }else{

            for(int z = 0; z < tam; z++){
                if(palabra[z] == 0){
                    blank++;
                }else{
                    if(blank > aux){
                        aux = blank;
                    }
                    blank = 0;
                }
            }
            cout << aux << "\n";

        }
    }
}