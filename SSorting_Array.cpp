#include <iostream>
using namespace std;

void sorting(int arr[], int a);

int main() {
    int size;
    cout << "Please define the array size: " << endl;
    cin >> size;

    int arr[size];
    cout << "Please place the numbers of your array" << endl;
    for(int i =0; i<size; i++) {
        cin >> arr[i]; 
    }

    sorting(arr, size);
    
    



    return 0;
}



// Defining the function to sort the Array via Selection Sort

void sorting(int arr[], int size) {

    for (int i=0; i < size-1; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] <= arr[j]) {
                
                continue;
            } else {
                // Swapping the numbers with each other
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }

    cout << "The sorted array is " << endl;
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    return;  
}
