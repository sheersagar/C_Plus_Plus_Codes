#include <iostream>
using namespace std;

int main() {
    int x, pwr, i =0;
    cout << "find the powers of the number" << endl;
    cout << "put the number " << endl;
    cin >> x ;
    cout << "put the value of number againg" << endl;
    int a;
    cin >> a;
    cout << "put the power " << endl;
    cin >> pwr ;
    
    while(i < pwr-1) {
        x = x *a;
        i++;
    }
    cout << "the value of " << a << " power " << pwr << " is " << x << endl;
    return 0;
}
