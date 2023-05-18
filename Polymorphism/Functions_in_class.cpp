#include <iostream>
using namespace std;

// Different kinds of Functions...........
/* Constructors, Destructors, Mutators, Accessors, Enquiry, Facilitators
    Destructors----They are the functions which are executed whenever a function reaches the end of its life
    Mutators---- Help us to change the values of Private variables or fields of a Class
    Accessors -----Help us to access the values of private variables or fields of a Class
    Enquiry functions-----They are the functions that are run to find a boolean, whether something about private field is true or not
    Facilitators------The functions that will do some processing out of the data (eg. Finding area of the circle, etc.)  
*/

// Class with constructor

class Complex_Number {
    private:
    int real;
    int imagine;

    public:

    Complex_Number(void) {
        real = 0;
        imagine = 0;
    }

    Complex_Number(int x, int y) {
        real = x;
        imagine = y;
    }



    Complex_Number (const Complex_Number& z) {
        real = z.real;
        imagine = z.imagine;
    }

    void print(void) {
        cout << real << endl;
        cout << imagine << endl;
    }
    
    // Adding Mutators
    void setValue(int, int);

    // Enquiry function
    bool isReal(void);

    // Facilitator
    Complex_Number findProduct(Complex_Number);

    // Accessors 
    void demo_print(void);
};





int main() {
    Complex_Number a, b, c;
    a.setValue(1,2);
    b.setValue(3,4);
    a.demo_print();
    b.demo_print();

    c = a.findProduct(b);
    c.demo_print();
    cout << c.isReal() << endl;


    return 0;
}

void Complex_Number::demo_print(void) {
    cout << real <<  " + " << imagine << endl;
}

void Complex_Number::setValue(int x, int y) {
    real = x;
    imagine = y;
}

bool Complex_Number::isReal(void) {
    if(imagine == 0) {
        return true;
    } else {
        return false;
    }
}

Complex_Number Complex_Number::findProduct(Complex_Number x) {
    Complex_Number z;
    z.real = real*x.real - imagine*x.imagine;
    z.imagine = imagine*x.real + real*x.imagine;
    return z;
}