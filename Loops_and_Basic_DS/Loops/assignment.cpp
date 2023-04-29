#include <iostream>
using namespace std;

int main() {
    // Checking whether two Matrix are symmetric or not
   /*
     __ matrix     __         __      __transpose matrix
    | 2  5   4 |             | 2  5  -1|   
    | 5  4   3 |  =======    | 5  4   3|     Rows becomes column and column becomes rows
    |-1  3   4 |             | 4  3   4|
    |_       __|             |__     __|



 __  __      __               __     __skwed matrix
    | 0  1 -2  |             | 0  1  -2|   
    |-1  0  3  |  =======    |-1  0   3|
    | 2 -3  0  |             | 2 -3   0|
    |_       __|             |__     __|

    */

   int n;
   cout << "type the number of arrays that you want " << endl;
   cin >> n;
   int arr[n][n];
   cout << "Please type your matrix number " << endl;

   for (int i =0; i < n ; i++) {
    for (int j =0; j < n; j++) {
        cin >> arr[i][j];
    }
   } 


// Making a Transpose Matrix from a Normal Matrix-----------------------------------------------------------
   int trans_arr[n][n];
   for ( int i =0; i < n; i++) {
    for (int j =0; j < n; j++) {
        trans_arr[i][j] = arr[j][i];
    }
   }


   //Now Checking whether Transpose Matrix is symmetric or Not

   cout << "Checking whether the Transpose is equal to the original matrix.........." << endl;
   bool is_transpose = true;
   
   for(int i =0; i < n; i++) {
    for (int j =0; j < n; j++){
        if(trans_arr[i][j] == arr[i][j]) {
            continue;
        } else {
            is_transpose = false;
            break;
        }
        // Breaking out of the inner loop the moment Transpose is false
    }

    if(!is_transpose) {
        break;
    }
    // Breaking out of the outer loop as well the moment Transpose is false

   }

   if(is_transpose) {
    cout << "The original matrix is identical to Transpose" << endl;
   } else {
    cout << "The original matrix is not identical to Transpose" << endl;
   }

   // Checking for Skewed Matrix out of Original one
    bool is_skewed = true;
    for (int i =0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(arr[i][j] == -trans_arr[i][j]){
                continue;
            } else {
                is_skewed = false;
                break;
            }
        }

        if(!is_skewed) {
            break;
        }

    }

    if(is_skewed) {
        cout << "The given array is skewed " << endl;
    } else {
        cout << "The given array is not a skewed array" << endl;
    }


    return 0;

}