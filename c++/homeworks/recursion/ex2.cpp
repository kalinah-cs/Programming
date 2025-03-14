#include <iostream>
using namespace std;

int stepen(int n, int s){
    if(s == 1){
        return n;
    }
    return n * stepen(n, s-1);
}

int main(){
    int n, s;
    cin >> n >> s;
    cout << stepen(n, s);
}