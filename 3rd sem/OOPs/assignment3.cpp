// Q3. Write a program for string operations in c++ using string and cstring type

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    string cppString = "Hello world, C++ Strings!";
    char cString[] = "Hello world, C Strings!";

    cout << "Using C++ string type:" << endl;
    cout << "Length of cppString: " << cppString.length() << endl;

    string cppString2 = " Welcome!";
    cout << "Concatenation: " << cppString2 + cppString << endl;

    string subString = cppString.substr(0, 5);
    cout << "Substring: " << subString << endl;

    size_t found = cppString.find("C++");
    if (found != string::npos) {
        cout << "Found 'C++' at position " << found << endl;
    } else {
        cout << "'C++' not found" << endl;
    }

    cout << endl;

    cout << "Using C-style (cstring) type:" << endl;
    cout << "Length of cString: " << strlen(cString) << endl;

    char cString2[] = " Welcome!";
    char concatenated[50];
    strcpy(concatenated, cString2);
    strcat(concatenated, cString);
    cout << "Concatenation: " << concatenated << endl;

    char subStringC[50];
    strncpy(subStringC, cString, 5);
    subStringC[5] = '\0';
    cout << "Substring: " << subStringC << endl;

    char* foundC = strstr(cString, "C");
    if (foundC != nullptr) {
        cout << "Found 'C' at position " << (foundC - cString) << endl;
    } else {
        cout << "'C' not found" << endl;
    }

    return 0;
}
