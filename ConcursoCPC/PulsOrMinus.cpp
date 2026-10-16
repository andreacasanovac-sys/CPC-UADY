#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, casos;
    cin >> casos;
    for (int x = 0; x < casos; x++){
        cin >> a >> b >> c;
        if(a + b == c){
            cout << "+" << "\n";
        }else if(a - b == c){
            cout << "-" << "\n";
        }
    }
    return 0;

}