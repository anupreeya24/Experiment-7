//Anupreeya Bhattacharjee
//23070123022

#include <iostream>
using namespace std;

int main() {
    int i, Max;
    const int n = 5; // Size of the array
    int arr[n] = {10, 30, 20, 50, 5}; 

    Max = arr[0]; 

    for (i = 1; i < n; i++) { 
        if (arr[i] > Max) { 
            Max = arr[i]; 
        }
    }

    cout << "The maximum value is: " << Max << endl;

    return 0;
}

// The maximum value is: 50 //
