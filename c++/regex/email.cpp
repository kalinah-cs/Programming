#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main(){
    string regexPt="\\w+\\.\\w+@\\w+\\.com";
    regex regexRule(regexPt);
    string emailText;
    cin >> emailText;

    bool isValid = regex_match(emailText, regexRule);

    if(isValid){
        cout << "It's valid.";
    }
    else{
        cout << "Email is not valid.";
    }
    
    return 0;
}