//Anupreeya Bhattacharjee
//23070123022


#include <iostream>
using namespace std;

int main() {
    int i, Min;
    int n=5; 
    int arr[] = {10, 30, 20, 50, 5};

    Min = arr[0];

    for (i = 1; i < n; i++) { 
        if (arr[i] < Min) { 
            Min = arr[i]; 
        }
    }

    cout << "The minimum value is: " << Min << endl;

    return 0;
}

// The minimum value is: 5
