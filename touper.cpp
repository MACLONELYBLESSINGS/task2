#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // For std::toupper
using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int vowelCount = 0;
    for (char ch : str) {
        if (toupper(ch) == 'A' || toupper(ch) == 'E' || toupper(ch) == 'I' || toupper(ch) == 'O' || toupper(ch) == 'U') {
            vowelCount++;
        }
    }
    return vowelCount;
}

// Function to count words in a string
int countWords(const string& str) {
    int wordCount = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return wordCount;
}

// Function to reverse a string
string reverseString(const string& str) {
    string reversedString;
    for (int i = str.length() - 1; i >= 0; --i) {
        reversedString.push_back(str[i]);
    }
    return reversedString;
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& str) {
    string modifiedString = str;
    bool capitalize = true;
    for (char& ch : modifiedString) {
        if (isalpha(ch)) {
            if (capitalize) {
                ch = toupper(ch);
                capitalize = false;
            }
        } else {
            capitalize = true;
        }
    }
    return modifiedString;
}

int main() {
    // Open the text file
    ifstream inputFile("fileData.txt");
    
    // Read the content of the file into a string variable
    string fileContent;
    getline(inputFile, fileContent);
    
    // Close the file
    inputFile.close();
    
    // Output the number of vowels
    int vowelsCount = countVowels(fileContent);
    cout << "Number of vowels: " << vowelsCount << endl;
    
    // Output the number of words
    int wordsCount = countWords(fileContent);
    cout << "Number of words: " << wordsCount << endl;
    
    // Output the reversed statement
    cout << "Reversed statement: " << reverseString(fileContent) << endl;
    
    // Output the statement with the second letter of each word capitalized
    cout << "Statement with second letter capitalized: " << capitalizeSecondLetter(fileContent) << endl;
    
    return 0;
}
