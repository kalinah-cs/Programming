#include <iostream>
using namespace std;

int NOD(int n1, int n2, int i){
    if(n1 == n2){
        return n1;
    }
    if(n1 % i == 0 && n2 % i == 0){
        return i;
    }
    return NOD(n1, n2, i-1);
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int i;
    if(n1 > n2) i = n2;
    if(n1 < n2) i = n1;
    cout << "NOD is:" << NOD(n1, n2, i);
}