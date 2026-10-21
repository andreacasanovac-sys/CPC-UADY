#include <bits/stdc++.h>
using namespace std;
int A[(long long)1e6+1];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, even, odd;
    even = 0;
    odd = 0;
    cin >> n;
    for (int x = 0; x < n; x++){
        cin >> A[x];
    }
    
    for (int y = 0; y < n; y++){
        if(A[y] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    if(even > odd){
        cout << "Sebastian" << "\n";
    }else{
    cout << "Notbastian" << "\n";
    }
    return 0;
}