#include <bits/stdc++.h>
using namespace std;
int main(){
    int casos postivo;
    positivo = 1;
    cin >> casos;
    for (int x = 0; x < casos; x++){
        int length;
        cin >> length;
        int positive[length];
        for(int y = 0; y < length; y++){
            int dato;
            cin >> dato;
            positive[y] = dato;
            if(positivo * positive[y] < 0){
                positive[y] += 1;
            }
        }
    }
    return 0;
}