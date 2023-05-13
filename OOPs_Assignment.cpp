#include <iostream>
using namespace std;

// Creating the Class for Employees
// 

class Employee {
    private:
    string name;
    string ph;
    string post;
    int age;

    public:
    void put_data(string a, string b, string c, int d) {
        name = a;
        ph = b;
        post = c;
        age = d;
    }


    void get_data() {
        cout << "The name of the employee is " << name << endl;
        cout << "The phone number of" << name << " is " << ph << endl;
        cout << "The post of " << name << " is " << post << endl;
        cout << "The age of " << name << " is " << age << endl;
    }
};


int main() {
        Employee a, b;

        a.put_data("Ankit", "8130024852", "JEE", 999);
        b.put_data("Pandy", "343235632", "Lt", 20);

        a.get_data();
        b.get_data();
        return 0;
    }