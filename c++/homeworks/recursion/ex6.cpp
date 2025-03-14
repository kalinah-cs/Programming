#include <iostream>
using namespace std;

double solve(double x, int n){
    if(n == 0) return 1;
    if(n == -1) return 1/x;
    if(n % 2 == 0){
        return solve(x*x, n/2);  //25 -1
    }
    else{
        return x * solve(x*x, (n-1)/2);// 25 . 25  -1
    }
}

int main(){
    int x, n; //5 -2
    cin >> x >> n;
    cout << solve(x, n);
    return 0;
}