#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "String: ";
    string str;
    cin >> str;

    int current;
    cout << "by how much do you want to encrypt/decrypt? ";
    int n;
    cin >> n;
    cout << "encrypt/decrypt?";
    char input;
    cin >> input;

    //decrypt
    if(input == 'd'){
        for(int i = 0; i < str.length(); i++){
            if(str[i] != ' '){
                current = str[i] - n;
                cout << current << " ";
            }

        }
    }
    //encrypt
    if(input == 'e'){
        for(int i = 0; i < str.length(); i++){
            if(str[i] != ' '){
                current = str[i] + n;
                cout << current << " ";
            }
        }
    }

    
    return 0;
}