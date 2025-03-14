#include <iostream>
using namespace std;

int main(){
    int sz;
    cin >> sz;
    int arr[sz];
    for(int i =0; i < sz; i++){
        cin >> arr[i];
    }
    int bn = arr[1], sn = arr[1];

    for(int i = 0; i<sz; i++){
        if(arr[i] > bn){
            bn = arr[i];
        }
        if(arr[i] < sn){
            sn = arr[i];
        }
    }
    cout << sn << endl;
    cout << bn;
    return 0;
}