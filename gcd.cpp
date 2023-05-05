#include <iostream>
using namespace std;

int main() {
    int a, b, gcd, x;

    cout << "Please type your first input number" << endl;
    cin >> a;
    cout << "Please type your second input number" << endl;
    cin >> b;

    if(a > b) {
        x = b;
    } else {
        x =a;
    }

    for (int i =1; i<=x; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    cout << "Your Greatest common number is " << gcd << endl;
    return 0;
}