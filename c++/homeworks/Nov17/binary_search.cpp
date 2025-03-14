#include <iostream>
using namespace std;

int main(){
    bool none = true;
    int sz, n;
    cin >> sz;
    int arr[sz];
    for(int i = 0; i < sz; i++){
        cin >> arr[i];
    }
    cin >> n;

    int max = sz;
    int min = 0;
    int mid;
    while(max > min){
        mid = (max + min)/2;
        if(arr[mid] == n){
            cout << n;
            break;
        }
        if(arr[mid] > n){
            max = mid;
        }
        if(arr[mid] < n){
            min = mid;
        }
    }
}