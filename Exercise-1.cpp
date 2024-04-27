/*
Develop a c++ program that does the following:
    1.Dynamically allocates an integer
    2.Dynamically allocates a string 
    3.Through user input, with prompts fpr the user:
            *Assign s value to the dynamically allocated integer
            * Assign a value to the dynamically allocated string
    
    4.Output onto the console:
            * The value of the dynamically allocated integer
            * The value of the  dynamically allocated string
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dynamically allocate an integer
    int *dynamicInteger = new int;

    // Dynamically allocate a string
    string *dynamicString = new string;

    // Prompt user to input value for the dynamically allocated integer
    cout << "Enter an integer value: ";
    cin >> *dynamicInteger;

    // Clear the input buffer
    cin.ignore();

    // Prompt user to input value for the dynamically allocated string
    cout << "Enter a string value: ";
    getline(cin, *dynamicString);

    // Output the values
    cout << "Dynamically allocated integer value: " << *dynamicInteger << endl;
    cout << "Dynamically allocated string value: " << *dynamicString << endl;

    // Free memory
    delete dynamicInteger;
    delete dynamicString;

    return 0;
}
