#include <iostream>
#include <string>
#include <sstream>
 
 using namespace std;
 
 int main(){
     int input;
     bool validInput;
     
     while (!validInput){
         //prompt the user to enter an integer value between 5 and 10
         cout << "Enter an integer value between 5 and 10" << endl;
         
         string userInput;
         getline(cin, userInput);
         
         //convert the string to an integer
         stringstream stream(userInput);
         if (stream >> input) {
             
             //checking if the input is between 5 and 10
             if (input >= 5 && input <= 10){
                 validInput = true;
                 
             }else{
                 cout << "Sorry,you entered an invalid number, please try again" << endl;
                 cout << input <<endl;
                 cout << "You entered " << input << ". Please enter anumber between 5 and 10" << endl;
             }
             } else {
                 cout << "Sorry, you entered an invalid number, please try again" << endl;
             }
     }
             cout << "Your input value (" << input << ") has been accepted." << endl;
             
             return 0;
         }
     
 
