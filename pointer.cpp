#include <iostream> 
using namespace std; 

int main() { 
    int firstValue; 
    int secondValue; 
    int *pPointer = nullptr; 

    // Assign pointer with the address of firstValue 
    pPointer = &firstValue; 
    *pPointer = 10; // Assigning value 10 to the memory location pointed by pPointer

    // Assign pointer with the address of secondValue 
    pPointer = &secondValue; 
    *pPointer = 20; // Assigning value 20 to the memory location pointed by pPointer

    cout << "firstValue is " << firstValue << '\n'; 
    cout << "secondValue is " << secondValue << '\n'; 

    return 0; 
}
