#include <iostream>
using namespace std;
#include <math.h>

int main() {
    int a, b, c, discriminant;
    cout << "Enter the respective values of a, b and c" << endl;
    cin >> a >> b >> c ;

    discriminant = (b*b) - (4*a*c);
    float x1, x2;

    if(discriminant == 0) {
        x1 = -b / (2.0*a);
        cout << "The roots are same" << endl;
        cout << "x1 == " << x1 << endl;
        return 0;
    } else if (discriminant > 0 ) {
        x1 = (-b + sqrt(discriminant) / (2.0*a));
        x2 = (-b - sqrt(discriminant) / (2.0*a));
        cout << "Roots are different" << endl;
        cout << "x1 == " << x1 << " x2 == " << x2 << endl;
        return 0;
    } else {
        cout << "Roots are not real" << endl;
        return 0;
    }
    
} 