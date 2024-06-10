#include <iostream> 
using namespace std; 

int main() { 
    int numbersArray[5]; 
    int *pPointer = nullptr; 

    // Assign the address of the first element to the pointer 
    pPointer = numbersArray; 
    *pPointer = 10; // Assign a value to the first element 

    // Increment the pointer using pointer arithmetic to assign the address of the second element to the pointer
    pPointer++; 
    *pPointer = 20; // Assign a value to the second element 

    // Assign the address of the third element to the pointer 
    pPointer = &numbersArray[2]; 
    *pPointer = 30; // Assign a value to the third element 

    // Assign the address of the fourth element to the pointer using pointer arithmetic 
    pPointer = numbersArray + 3; 
    *pPointer = 40; // Assign a value to the fourth element 

    // Assign the address to the first element to the pointer 
    pPointer = numbersArray; 

    // Assign a value to the fifth element using indirection and pointer arithmetic 
    *(pPointer + 4) = 50; 

    // Iterate and output all the elements in the array 
    for (int n = 0; n < 5; n++) { 
        cout << numbersArray[n] << ", "; 
    } 

    return 0; 
}
