#include <iostream>
#include <string>
#include <regex>
using namespace std;

void PtMatched(string str, regex ptr){
    sregex_iterator currentW(str.begin(), str.end(), ptr);
    sregex_iterator endW;

    while(currentW != endW){
        smatch word = *currentW;
        cout << "Match: " << word.str() << endl;
        ++currentW;
    }
}

int main(){
    string str = "The ape was at the apex.";
    regex pattern ("ape[^]?");
    PtMatched(str, pattern);
    return 0;
}