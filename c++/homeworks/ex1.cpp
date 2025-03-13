#include <iostream>
using namespace std;

void print(int* begin, int* end){
    while(begin < end){
        cout << *begin << " ";
        begin++;
    }
    cout << endl;
}

struct Vector3{
    float x, y, z;

    Vector3()
        : x(10), y(11), z(12) {}
};

int UpperBound(int* begin, int* end, int n){
    while(begin < end){
        if(*begin > n){
            return *begin;
        }
        else{
            begin++;
        }
    }
    //cout << "Not Found";
    return 0;
}

bool equal(int *begin, int *end, int *begin1, int *end1){
    bool started = false;

    for(int *i = begin1; i < end1; i++){
        for(int *j = begin; j < end; j++){
            if(*i == *j){
                cout << *i << " ";
                if(!started){
                    started = true;
                }
            }
        }
    }

    if(started) return true;
    // for(int *i = begin1, *j = begin; i < end1 && j < end; i++, j++){
    //         if(*i == *j){
    //             cout << *i << " ";
    //             if(!started){
    //                 started = true;
    //             }
    //         }
    //         else if(started){
    //             cout << endl;
    //             return true;
    //         }
    // }
    
    return false;
}

void replace(int *begin, int *end, int oldv, int newv){
    while(begin < end){
        if(*begin == oldv){
            begin == &oldv;
        }
        cout << *begin;
    }
}


int main(){
    // lesson
    int value =5; // stack
    int array[5];
    for(int i =0; i < 5; i++){
        array[i] = i;
    }
    Vector3 vector;

    int* hvalue = new int; //heap
    *hvalue = 5;
    int* harray = new int[5];  
    for(int i =0; i < 5; i++){
        harray[i] = i;
    }
    Vector3* hvector = new Vector3();

    //ex 1
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    print(arr, arr+n);
    //ex 2
    int num;
    cin >> num;
    cout << UpperBound(arr, arr+n, num);
    //int *ptr = UpperBound(arr, arr+n, num);

    //ex3
    int n1;
    cout << "ex3";
    cin >> n1;
    int *arr1 = new int[n1];
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    bool isEq = equal(arr, arr+n, arr1, arr1+n1);
    if(isEq){
        cout << "It's equal!";
    }
    else{
        cout << "It's not equal!";
    }


    //ex4



    delete hvalue;
    delete[] harray;
    delete hvector;
    delete[] arr;
    delete[] arr1;
    return 0;
}