#include <iostream>
using namespace std;

int st(int n, int i){
    if(n < 10) return i;
    return st(n/10, ++i);
}

int main(){
    int n, i=1;
    cin >> n;
    if(n < 0) n = -n;
    cout << st(n, i);
}


