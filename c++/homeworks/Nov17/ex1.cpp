#include <iostream>
using namespace std;

int main(){
    bool none = true;
    int sz;
    cin >> sz;
    int arr[sz];
    for(int i = 0; i < sz; i++){
        cin >> arr[i];
    }
    int n;
    cin >> n;

    for(int i = 0; i < sz; i++){
        if(arr[i] == n){
            cout << i;
            none = false;
        }
    }
    if(none){
        cout << "-1";
    }
    return 0;
}