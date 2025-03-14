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
    int n, sum = 0;
    cin >> n;

    for(int i = 0; i < sz; i++){
        if(arr[i] == n){
            none = false;
            sum++;
        }
    }
    if(none){
        cout << "None"<<endl;
    }
    cout << sum;
    return 0;
}