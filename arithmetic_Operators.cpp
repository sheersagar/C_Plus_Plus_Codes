#include <iostream>
using namespace std;

int main() {
    int height, base;
    float area;

    cout << "please input your height" << endl;
    cin >> height;
    cout << "please input your base" << endl;
    cin >> base;

    area = (float)height * (float)base / 2;
    cout << "Your triangle area is " << area << endl;

    return 0;

}