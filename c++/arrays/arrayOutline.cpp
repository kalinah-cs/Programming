#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Please write n and m: ";
    cin >> n >> m;
    string arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(j == 0 || j == m - 1 || i == 0 || i == n - 1){
                arr[i][j] = "#";
            }
            else{
                arr[i][j] = ".";
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}