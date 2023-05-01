#include <iostream>
#include <string>
using namespace std;


int main() {
    string input;

    cout << "Put your String value here " << endl;

    cin >> input;
    int len = input.length();
    string reverse;

    bool palindrome = true;
    for(int i = 0; i < len; i++) {
        reverse[i] = input[len - 1 - i];
    }
    
    for(int i = 0; i < len; i++) {
        if(reverse[i] == input[i]) {
            continue;
        } else {
            palindrome = false;
        }
    }

    if(palindrome) {
        cout << "The input string is Palindrome" << endl;
    } else {
        cout << "The input string is not Palindromic" << endl;
    }

    return 0;

}