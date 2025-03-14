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

    int min = 0;
    int mid, max = sz;
    while(max > min){
        mid = (max + min)/2;
        if(arr[mid] == n){
            for(int i = mid -1; i >= 0; i--){
                if(arr[i] != n){
                    cout << i + 1 << " ";
                    break;
                }
            }
            for(int i = mid +1; i <= max; i++){
                if(arr[i] != n){
                    cout << i - 1 << " ";
                    break;
                }
            }
            break;
        }
        if(arr[mid] > n){
            max = mid;
        }
        if(arr[mid] < n){
            min = mid;
        }
    }
    return 0;
}