#include <iostream>
using namespace std;

// Function overloading---> Having more than one function with the same name but different parameters or Arguments



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

    // Contructor takes parameter as Constructor
    // We cannot take the Object of Class as a parameter directly. 
    // We need to pass Object of Class as a reference
    // We put & after Object to denote it as a reference to the Object of the Class
    //  Reference variable is just an alias...
    //  This reference Object we have to treat it as constant, So that we don't actually change it
    Complex_Number (const Complex_Number& z) {
        real = z.real;
        imagine = z.imagine;
    }

    void print(void) {
        cout << real << endl;
        cout << imagine << endl;
    }

    // Prototype of function 
    void demo_print(void);

    // We can also define this function outside of this class by following certain set of rules.
    // scope of any public function or method is normally defined inside of the curly braces of the Class.
    // But we can access that scope outside of the class using "Scope Resolution Operators"

};
// We have to write the print function in this manner if we have to place our class function outside of the class.
// :: this "Scope Resolution operator" after class name with function name.....
// Return type would be void 
void Complex_Number::demo_print(void) {
    cout << real << endl;
}

int main() {
    Complex_Number a;
    a.print();
    Complex_Number b(2,3);
    b.print();
    Complex_Number c(b);
    c.print();

    return 0;
};