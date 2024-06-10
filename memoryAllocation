#include <iostream> 
using namespace std; 

int main() { 
    int numberOfElements; // Missing semicolon here
    int* dynamicArray = nullptr; // Initialize the pointer to nullptr
    cout << "How many numbers would you like to type? "; 
    cin >> numberOfElements; 

    // Check if the input is valid
    if (numberOfElements <= 0) { 
        cout << "Error: Invalid input. Number of elements should be greater than zero."; 
        return 1; // Exit with error code
    } 

    dynamicArray = new int[numberOfElements]; // Allocate memory for the array

    // Check if memory allocation was successful
    if (dynamicArray == nullptr) { 
        cout << "Error: Memory could not be allocated"; 
        return 1; // Exit with error code
    } 

    // Input numbers into the array
    for (int i = 0; i < numberOfElements; i++) { 
        cout << "Enter number: "; 
        cin >> dynamicArray[i]; 
    } 

    // Display the entered numbers
    cout << "You have entered: "; 
    for (int j = 0; j < numberOfElements; j++) { 
        cout << dynamicArray[j] << "; "; 
    } 
    cout << endl; // Add a new line for clarity

    // Deallocate the dynamically allocated memory
    delete[] dynamicArray; 

    return 0; 
}
