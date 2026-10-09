#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    if(N % 4 == 0 || N % 4 == 1){
        N /= 4;
        N*=N;
        cout << N << "\n";
    }else if(N % 4 >= 2){
        N /= 4;
        N*=(N+1);
        cout << N << "\n";
    }
    return 0;
}