#include <iostream>
#include "Rectangle.h"

int main() {
    // Creating an instance using default constructor
    Rectangle rect1;

    // Assigning values via user input
    float length, width;
    std::cout << "Enter length of rectangle: ";
    std::cin >> length;
    std::cout << "Enter width of rectangle: ";
    std::cin >> width;

    rect1.setLength(length);
    rect1.setWidth(width);

    // Calculating and outputting area
    std::cout << "Area of rectangle 1: " << rect1.calculateArea() << std::endl;

    // Creating another instance using overloaded constructor
    std::cout << "\nEnter length and width for rectangle 2:\n";
    std::cin >> length >> width;
    Rectangle rect2(length, width);

    
    std::cout << "Area of rectangle 2: " << rect2.calculateArea() << std::endl;

    return 0;
}
