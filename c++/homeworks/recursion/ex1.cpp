#include <iostream>
using namespace std;

int sbor(int n, int m){
    if(n == m){
        return n;
    }
    return n + sbor(n+1, m);
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << "Sum is: " << sbor(n, m);
    return 0;
}