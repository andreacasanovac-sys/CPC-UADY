#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long n;
    cin >> n;
    n *= n;
    if(n >= 8){
        if (n % 8 != 0){
            cout << (n / 8) - 1 << "\n";
        }else {
            cout << n / 8 << "\n";
        }
        
    }else if(n < 8){
        cout << "0" << "\n";
    }
    if(n >= 4){
        if (n % 4 != 0){
            cout << (n / 4) - 1 << "\n";
        }else{
            cout << n / 4 << "\n";
        }
    }else if (n < 4){
        cout << "0" << "\n";
    }
}