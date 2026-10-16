#include <bits/stdc++.h>
using namespace std;
int main(){
    int p, o; 
    int aux = 0;
    cin >> p;
    for (int x = 0; x < p; x++){
        cin >> o;
        if(o == 1){
            aux++;
        }
    }
    if (aux > 0){
        cout << "HARD" << "\n";
    }else{
        cout << "EASY" << "\n";
    }

    return 0;
}