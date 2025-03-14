#include <iostream>
#include <windows.h>
using namespace std;

int game(int x, int y, int n, int m){
        string arr[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
             if(j == 0 || j == m - 1 || i == 0 || i == n - 1){
                arr[i][j] = "#";
            }
            else if(i == x && j == y){
                    arr[i][j] = "o";
            }
            else{
                    arr[i][j] ="."; 
                }
        }        
    }
}

int main(){
    int x=1, y=1;
    while(true){
        if(GetAsyncKeyState('W') & 0b1){
                x = x-1;
                cout << x << " " << y << endl;
            }
            if(GetAsyncKeyState('A') & 0b1){
                y = y-1;
                cout << x << " " << y << endl;
            }
            if(GetAsyncKeyState('S') & 0b1){
                x = x+1;
                cout << x << " " << y << endl;
            }
            if(GetAsyncKeyState('D') & 0b1){
                y = y+1;
                cout << x << " " << y<< endl;
            }
    }
    cin.get();
}