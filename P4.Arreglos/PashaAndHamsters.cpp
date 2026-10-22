#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b; //Manzanas de Pasha / Manzanas que quiere Arthur / Manzanas que quiere Alex;
    cin >> n >> a >> b;
    int Arthur[a];
    int Alexander[b];
    for (int x = 0; x < a; x++){
        cin >> Arthur[x];
    }

    for (int y = 0; y < b; y++){
        cin >> Alexander[y];
    }

    for (int z = 0; z < n; z++){
        bool find = false;
        for (int m = 0; m < a; m++){
            if(Arthur[m] == z + 1){
                find = true;
                break;
            }
        }
        if(find == true){
            cout << "1 ";

        }else{
            cout << "2 ";
        }
    }
    return 0;
}
