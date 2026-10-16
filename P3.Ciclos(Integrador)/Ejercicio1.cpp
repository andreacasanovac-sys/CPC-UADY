#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int a , b;
    cin >> a >> b;
    for(int x = a; x < b; x++){

        if (x % 3 == 0 && x % 5 == 0){
            cout << "FizzBuzz" << "\n";
            continue;
        } else if(x % 5 == 0){
            cout << "Buzz" << "\n";
            continue;
        } else if (x % 3 == 0){
            cout << "Fizz" << "\n";
            continue;
        }else {cout << x << "\n";}

    }
    return 0;
}