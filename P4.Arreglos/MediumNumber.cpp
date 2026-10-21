#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    int arr[3];
    int aux = 0;
    for (int x = 0; x < t; x++){
        for (int y = 0; y < 3; y++){
            cin >> arr[y];
        }
        if((arr[0] > arr[1] && arr[0] < arr[2]) || (arr[0] > arr[2] && arr[0] < arr[1])){

            cout << arr[0] << "\n";

        }else if((arr[1] > arr[0] && arr[1] < arr[2]) || (arr[1] > arr[2] && arr[1] < arr[0])){

            cout << arr[1] << "\n";

        }else if((arr[2] > arr[1] && arr[2] < arr[0]) || (arr[2] > arr[0] && arr[2] < arr[1])){

            cout << arr[2] << "\n";

        }else{

            cout << "Error" << "\n";
        }
        
    }
    return 0;
}