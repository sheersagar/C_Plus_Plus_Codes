#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    char x;

    cout << "Please provide the name of your string" << endl;
    cin >> input;
    cout << "Please provide the charachter you want to find" << endl;
    cin >> x;

    bool char_in_string = true;
    int i =0;
    int l = input.length();
    for (int i; i<l; i++) {
        if(input[i] == x) {
            cout << "The position of char == " << x << " is " << i << endl;
            char_in_string = true;
            break;
        }
    }

    if(!char_in_string) {
        cout << "Sorry the char is not present " << endl;
        
    }
    return 0;
}