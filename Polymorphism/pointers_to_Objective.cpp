#include <iostream>
using namespace std;

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
    Complex_Number a;
    a.setValue(1,2);
    
    // int i = 6;        // ** This is how a pointer functions...
    // int *j;       // *j will be called as-----> Pointer J
    // j = &i;       // This will say------> Pointer = address of i  ++ Now value of Pointer J = value of i (6)
    // cout << "value of j is " << j << " which is address of " << i << endl;
    // cout << *j << endl;

    Complex_Number *b;
    b = &a;
    // ->   this operator is used to access the element of that object 
    b->demo_print();
    

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