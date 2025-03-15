#include <iostream>
using namespace std;

int* upperBound(int *begin, int *end, int n){
    while(begin < end){
        if(*begin == n){
            return ++begin;
        }
        begin++;
    }
    return nullptr;
}

//second way
const int* upperBound2(const int *begin, const int *end, int n){
    while(begin < end){
        if(*begin == n){
            return ++begin;
        }
        begin++;
    }
    return nullptr;
}

int main(){
    int n = 5;
    int *arr = new int[n];
    for(int i =0; i< n; i++){
        cin >> arr[i];
    }
    // int *ptr = upperBound(arr, arr+n, 4); if i need using first way
    const int *ptr = upperBound2(arr, arr+n, 4);
    if (!ptr)
    {
        cout << "Nqma takova chislo" << endl;
    }
    else
    {
        cout << ptr << " " << *ptr << endl;
    }


    delete[] arr;
    return 0;
}