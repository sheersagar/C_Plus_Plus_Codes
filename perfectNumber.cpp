#include <iostream>
using namespace std;


int main() {
    int input;
    cout << "Type the number in the range between 1 to 500" << endl;
    cin >> input;

    int sum = 0;

    if(input <= 0 || input >= 501) {
        cout << "Please provide input in between the range of 1 and 500" << endl;
    } else {
        for(int i = 1; i < input; i++) {
            if(input % i == 0) {
                sum += i;
            }
        }

        if(sum == input) {
            cout << input << " is a perfect number" << endl;
        } else {
            cout << input << " is not a perfect number " << endl;
        }
    }
       

    

    return 0;
}