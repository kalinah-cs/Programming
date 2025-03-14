#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main(){
    
    string regexPt="\\w+\\.\\w+@\\w+\\.com";
    regex regexRule(regexPt);
    string email;
    cin >> email;

    bool check = regex_match(email, regexRule);
    if(check){
        cout << "Valid email.";
    }
    else{
        cout << "Not a valid email.";
    }
    return 0;
}