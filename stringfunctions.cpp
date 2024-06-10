#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[20]; // Make sure str3 has enough space for concatenation
    int len;

    // Copy str1 into str3
    strcpy(str3, str1);
    cout << "strcpy(str3, str1): " << str3 << endl;

    // Concatenates str1 and str2
    strcat(str3, str2);
    cout << "strcat(str3, str2): " << str3 << endl;

    // Total length of str3 after concatenation
    len = strlen(str3);
    cout << "strlen(str3): " << len << endl;

    return 0;
}
