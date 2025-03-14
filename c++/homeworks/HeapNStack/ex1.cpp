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
            cout << newv;
        }
        else{
            cout << *begin;
        }
        begin++;
    }
}

void rotate (int *begin, int *mid, int *end){
    //1 2 3 4 5
    //3 4 5 1 2
    for(int *i = mid; i < end; i++){
        cout << *i;
    }
    while(begin < mid){
        cout << *begin;
        begin++;
    }

}

void Search(int *begin, int *end, int *sbegin, int *send){
    // 1 2 3 4 5
    // 2 3 4
    bool IsFull = false;
    int count = 0;
    for(int *i = begin; i < end; i++){
        if(*i == *sbegin){
            for(int *j = sbegin, *k = i; j < send && i < end; j++, k++){
                if(*j == *k){
                    IsFull = true;
                }
                else{
                    IsFull = false;
                }
            }
            if(IsFull){
                count++;
                cout << count << ". ";
                for(int *g = sbegin; g < send; g++){
                    cout << *g;
                }
                IsFull = false;
                cout << endl;
            }
        }
    }
}

bool EndsWith(int *begin, int *end, int *begin1, int *end1){
    for(int *i = end, *j = end1; i > begin && j > begin1; i--, j--){
        if(*j != *i){
            return false;
        }
    }
    return true;
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




    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //ex 2
    int num;
    //cin >> num;

    //ex 3
    int n1;
    // cout << "ex3";
    // cin >> n1;
    int *arr1 = new int[n1];
    // for(int i = 0; i < n1; i++){
    //     cin >> arr1[i];
    // }


    //ex 4
    int oldv, newv;
    //cin >> oldv >> newv;

    //ex6
    int s;
    //cin >> s;
    int *search = new int[s];
    // for(int i = 0; i < s; i++){
    //     cin >> search[i];
    // }

    //ex 7
    int k;
    //cin >> k;
    int *ar = new int[k];
    // for(int i = 0; i < k; i++){
    //     cin >> ar[i];
    // }

    //ex8
    int s1;
    cin >> s1;
    int *search1 = new int[s1];
    for (int i =0; i < s1; i++){
        cin >> search1[i];
    }


    //ex1
    //print(arr, arr+n);



    //ex 2
    //cout << UpperBound(arr, arr+n, num);



    //ex3
    // bool isEq = equal(arr, arr+n, arr1, arr1+n1);
    // if(isEq){
    //     cout << "It's equal!";
    // }
    // else{
    //     cout << "It's not equal!";
    // }


    //ex4
    //replace(arr, arr+n, oldv, newv);

    //ex5
    //rotate(arr, arr+n/2, arr+n);

    //ex6
    //Search(arr, arr+n, search, search+s);
    
    //ex7
    // EndsWith(arr, arr+n, ar, ar+k);
    // if(EndsWith){
    //     cout << "yes";
    // }
    // else{
    //     cout << "no";
    // }

    //ex8


    delete hvalue;
    delete[] harray;
    delete hvector;
    delete[] arr;
    delete[] arr1;
    delete[] search;
    delete[] ar;
    delete[] search1;
    return 0;
}