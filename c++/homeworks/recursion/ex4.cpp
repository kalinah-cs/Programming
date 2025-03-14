#include <iostream>
#include <string>
using namespace std;

int sign(int sn){
    int i;
    cin >> i;
    if(i == 0){
       return sn; 
    }
    if(i < sn){
        sn = i;
    }
    return sign(sn);
}

int main(){
    cout << sign(0);
}