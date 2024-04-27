/*
Develop a c++ program that does  the following 
1. Dynamically allocates  a 2 dimensional array of doubles
        * The dimensions of the array must be provided via input from the user
        * The dimensions of the array must not exceed 3, therefore your
          program must enforce this and prompt the user accordingly

2. Using  nested loops, your program must assign values  to each element of the array
3. your program must output the values of each element of the array onto the console

*/
#include <iostream>

using namespace std;

int main() {
    int numRows, numCols;

    // Prompt user to input dimensions of the array
    cout << "Enter the number of rows (not exceeding 3): ";
    cin >> numRows;
    if (numRows > 3) {
        cout << "Number of rows exceeds the limit of 3. Exiting program." << endl;
        return 1;
    }

    cout << "Enter the number of columns (not exceeding 3): ";
    cin >> numCols;
    if (numCols > 3) {
        cout << "Number of columns exceeds the limit of 3. Exiting program." << endl;
        return 1;
    }

    // Dynamically allocate a 2D array of doubles
    double **matrix = new double*[numRows];
    for (int i = 0; i < numRows; ++i) {
        matrix[i] = new double[numCols];
    }

    // Assign values to each element of the array using nested loops
    cout << "Enter the values for the matrix:" << endl;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Output the values of each element of the array
    cout << "Values of the matrix:" << endl;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Free dynamically allocated memory
    for (int i = 0; i < numRows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
