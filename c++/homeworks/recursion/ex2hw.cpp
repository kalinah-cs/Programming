#include <iostream>
using namespace std;

int sbor(int n, int k1){ 
    if(n == k1){ 
        return 0;
    }
    if(n % k1 == 0){  
        return k1 + sbor(n, ++k1);
    }
    else{
        return sbor(n, ++k1);
    }
}//

int main(){
    int n, k1=1;
    cin >> n;
    if(n < 0){
        cout << "0";
    }
    else{
        cout << sbor(n, k1);
    }
    return 0;
}