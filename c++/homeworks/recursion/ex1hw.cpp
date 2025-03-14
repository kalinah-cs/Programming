#include <iostream>
#include <string>
using namespace std;

int check(string name, int sm, int b, int i){
    if(i == name.length()){
        cout << sm << endl << b;
        return 0;
    }
    if(name[i] >= 'A' && name[i] <= 'Z'){
        return check(name, sm, ++b, ++i);
    }
    if(name[i] >= 'a' && name[i] <= 'z'){
        return check(name, ++sm, b, ++i);
    }
}

int main(){
    string name;
    int i=0, sm = 0, b=0;
    cin >> name;
    check(name, sm, b, i);
    return 0;
}