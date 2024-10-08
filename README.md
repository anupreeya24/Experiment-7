# Experiment-7
# Experiment 7
**Aim:** <br>
To study and implement C++ Arrays and Strings<br>
<br>
**Theory:** <br>
C++ arrays are collections of elements with mutually inclusive types which stay together in one contiguous memory space. They can be declared by presenting the type of these elements followed by square brackets that hold their numbers. In other words, arrays begin counting from zero; thus for instance character zero on array becomes the first one while second one becomes character one and so forth. C++ arrays have fixed sizes that must be determined at compile time.<br>

In C++, strings are managed through either C-style string or by utilizing the _string_ class which is included in the Standard Library. In this programming language, strings are made up of groups of characters terminated by a null character (‘\0’). Actions on C-styled strings are done by functions from C standard library like _strlen_, _strcpy_ and _strcat_.<br>
<br>
Here's a breakdown of the algorithm used in your code to find the maximum value in an array, along with a more generalized description:

### Algorithm to Find Maximum Value in an Array

1. **Initialize Variables**:
   - Set a variable `Max` to the first element of the array (i.e., `arr[0]`).
   - Define an integer `n` as the number of elements in the array.

2. **Loop Through the Array**:
   - Start a loop from the second element (index 1) to the last element (index `n-1`).
   - For each element, check if it is greater than `Max`.
   - If it is, update `Max` to this element.

3. **Output the Result**:
   - After completing the loop, print the value of `Max`.

### Pseudocode

```plaintext
function findMaximum(arr):
    Max = arr[0]
    for i from 1 to length(arr) - 1:
        if arr[i] > Max:
            Max = arr[i]
    return Max
```

### Complexity Analysis
- **Time Complexity**: O(n), where n is the number of elements in the array, since we need to check each element once.
- **Space Complexity**: O(1), since we are using a constant amount of extra space.

### Example
For the array `{10, 30, 20, 50, 5}`, the algorithm will evaluate:
- Compare 30 with 10 → Max becomes 30.
- Compare 20 with 30 → Max remains 30.
- Compare 50 with 30 → Max becomes 50.
- Compare 5 with 50 → Max remains 50.

Final output will be "The maximum value is: 50".

If you need algorithms for other functionalities or more details, feel free to ask!

Your code successfully concatenates two strings (first name and last name) and outputs the full name. Here’s a breakdown of the algorithm used and a more generalized description.

### Algorithm to Concatenate Strings

1. **Initialize Variables**:
   - Create a string variable `firstName` and assign it the value "Anupreeya ".
   - Create another string variable `lastName` and assign it the value "Bhattacharjee".

2. **Concatenate Strings**:
   - Create a new string variable `fullName` by adding `firstName` and `lastName`.

3. **Output the Result**:
   - Print the value of `fullName`.

### Pseudocode

```plaintext
function concatenateNames(firstName, lastName):
    fullName = firstName + lastName
    return fullName

main:
    firstName = "Anupreeya "
    lastName = "Bhattacharjee"
    fullName = concatenateNames(firstName, lastName)
    print(fullName)
```

### Complexity Analysis
- **Time Complexity**: O(m + n), where m is the length of `firstName` and n is the length of `lastName`, because concatenation takes time proportional to the length of the strings.
- **Space Complexity**: O(m + n), since a new string is created that combines both input strings.

### Output
The output of your program will be:
```
Anupreeya Bhattacharjee
```

If you have further questions or need help with other algorithms, feel free to ask!

Your code is designed to check if a specific number exists in an array and count how many times it appears. However, there are a couple of issues in your implementation, particularly with the way the array is defined. The size of the array `a` should be defined after reading `n`. Here’s an improved version of your code along with a breakdown of the algorithm.

### Improved Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 0, i = 0;
    int num = 0, co = 0; // co is the count of occurrences

    cout << "Enter size of array: ";
    cin >> n;

    // Define the array after getting the size
    int a[n];

    for (i = 0; i < n; i++) {
        cout << "Enter element no. " << i + 1 << " of the array: ";
        cin >> a[i];
    }
    cout << endl;

    cout << "Enter the number you want to check: ";
    cin >> num;

    // Count occurrences of num in the array
    for (i = 0; i < n; i++) {
        if (a[i] == num) {
            co++;
        }
    }

    // Output result
    if (co == 0) {
        cout << "Element was not found." << endl;
    } else {
        cout << "The element was found " << co << " times." << endl;
    }

    return 0;
}
```

### Algorithm to Check for Element in an Array

1. **Input Size of Array**:
   - Prompt the user to enter the size of the array (`n`).

2. **Define Array**:
   - Declare an array `a` of size `n`.

3. **Input Array Elements**:
   - Use a loop to read `n` elements into the array.

4. **Input Number to Check**:
   - Prompt the user to enter the number (`num`) they want to check in the array.

5. **Count Occurrences**:
   - Initialize a counter `co` to zero.
   - Use a loop to iterate through the array and compare each element to `num`. If they match, increment the counter.

6. **Output Result**:
   - If `co` is zero, print that the element was not found.
   - Otherwise, print the number of times the element was found.

### Complexity Analysis
- **Time Complexity**: O(n), where n is the size of the array, since we check each element once.
- **Space Complexity**: O(n), for storing the array elements.

### Output Example
If the user inputs the size of the array as `5`, and the elements as `10, 20, 30, 20, 40`, then if they check for `20`, the output will be:
```
The element was found 2 times.
```

If they check for `50`, the output will be:
```
Element was not found.
```

Feel free to ask if you have any further questions or need modifications!

Your code successfully reverses a string and prints the result. Here’s a breakdown of the algorithm and a more general description.

### Algorithm to Reverse a String

1. **Initialize Variables**:
   - Create a string variable `str` and assign it the value "COMPUTER".
   - Determine the length of the string and store it in the variable `n`.

2. **Loop to Reverse**:
   - Use a loop that starts from the last character of the string (index `n - 1`) and decrements to 0.
   - In each iteration, print the character at the current index.

3. **Output**:
   - After the loop, print a newline for better readability.

### Pseudocode

```plaintext
function reverseString(str):
    n = length(str)
    for i from n - 1 to 0:
        print str[i]
    print newline

main:
    str = "COMPUTER"
    reverseString(str)
```

### Complexity Analysis
- **Time Complexity**: O(n), where n is the length of the string, since each character is printed once.
- **Space Complexity**: O(1), since no additional storage is used aside from variables.

### Output
The output of your program will be:
```
RETUPMOC
```

If you need further assistance or more examples, feel free to ask!
