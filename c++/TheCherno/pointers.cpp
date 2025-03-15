#include <iostream>
using namespace std;

int main(){
    int x = 4; // integer x eq to 4
    int *pX = &x; //integer pointer named px is eq to the address to x
    //dereference - go to address pointed to by pointer and take the value
    int y = *pX; //int y eq to dereference/the thing pointed to by pX
    
    return 0;
}