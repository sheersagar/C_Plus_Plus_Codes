#include <iostream>
using namespace std;

int main() {
    int n, i, val, sum = 0;
    float average;
    cout << "No of times that you want an average to be done" << endl;
    cin >> n;

    for(i = 0; i < n ; i++) {
        cout << "Put your " << i+1 << " Number" << endl;
        cin >> val;
        sum = sum + val;
    }

    average = (float) sum / n;

    cout << "The value of average of numbers that you have provided is = " << average << endl;

    return 0;
}