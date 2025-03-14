#include <iostream>
#include <regex>
using namespace std;
 
int main() {
    regex emailRegex("[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}");
    regex phoneRegex("\\+?[0-9]{1,3}[\\s-]?[0-9]{1,4}[\\s-]?[0-9]{1,4}[\\s-]?[0-9]{1,4}");
    regex urlRegex("(http|https)://[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,3}(/\\S*)?");
 
    string text;
    cout << "Enter text:\n";
    getline(cin, text);
 
    sregex_iterator endIt;
 
    // Извеждаме имейлите
    cout << "\nEmails found:\n";
    sregex_iterator emailIt(text.begin(), text.end(), emailRegex);
    for (; emailIt != endIt; ++emailIt)
        cout << (*emailIt).str() << endl;
 
    // Извеждаме телефонните номера
    cout << "\nPhone numbers found:\n";
    sregex_iterator phoneIt(text.begin(), text.end(), phoneRegex);
    for (; phoneIt != endIt; ++phoneIt)
        cout << (*phoneIt).str() << endl;
 
    // Извеждаме URL адресите
    cout << "\nURLs found:\n";
    sregex_iterator urlIt(text.begin(), text.end(), urlRegex);
    for (; urlIt != endIt; ++urlIt)
        cout << (*urlIt).str() << endl;
 
    return 0;
}