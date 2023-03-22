#include <iostream>
#include <unistd.h>


using namespace std;

char c;

string input;

void reverse() {
    cout << "choose again: susware, aztup-crack\n";
}

void options() {
    while (1 > 0) {
        cin >> input;
        if (input == "susware") {
            cout << "sasware.github.io\n";
            reverse();
            
        } else if (input == "aztup-crack") {
            cout << "icesploit.github.io\n";
            reverse();
        } else {
            cout << "command not found!\n";
            reverse();
        }
    }
    
}



int main() {
    cout << "Welcome to Sasware control panel!\nWhat would you like to make today?" << endl;
    cout << "Options: susware, aztup-crack\n";
    cout << "who\n";
    options();
}
