#include <iostream>
using namespace std;

int main() {
    // A pointer is a variable whose value is the address of another variable of similar type;
    // i.e., direct address of the memory location

    // a--1 block of 4 bytes, address - 2002, value = 5
    // b--1 block of 4 bytes, address - 5003, value = 2.1
    // c--1 block of <> bytes, address - 1001, value = <address>

    int a = 5;
    float b = 2.1;
    int *c;  // pointer to integer variable (c )
    float *d; // pointer to float variable (d)

    c = &a; // & = address (hence address of a)
    // c--1 block of <4> bytes, address - 1001, value = <2002> 
    d = &b;

    int arr[10]; // {1,2,3,4,5,.....}
    arr; // By writing only name of the array---> It will give the address of the base element of the Array---> value = 1;
    

    return 0;
}