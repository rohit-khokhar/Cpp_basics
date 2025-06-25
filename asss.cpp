#include<iostream>
#include<string>



using namespace std;

// Function to display header files
void displayHeaderFiles() {
    cout << "Standard C++ Header Files:" << endl;
    cout << "<iostream>" << endl;
    cout << "<string>" << endl;
    cout << "<vector>" << endl;
    // Add more header files as needed
}

// Function to display definitions
void displayDefinitions() {
    cout << "Definitions:" << endl;
    cout << "1. #include - includes a header file" << endl;
    cout << "2. using namespace std; - uses the standard namespace" << endl;
    // Add more definitions as needed
}

// Function to display functions supported by a header file
void displayFunctions(const string& headerFile) {
    if (headerFile == "iostream") {
        cout << "Functions supported by <iostream>:" << endl;
        cout << "1. cout - outputs to the console" << endl;
        cout << "2. cin - inputs from the console" << endl;
        // Add more functions as needed
    } else if (headerFile == "string") {
        cout << "Functions supported by <string>:" << endl;
        cout << "1. string - creates a string object" << endl;
        cout << "2. length() - returns the length of the string" << endl;
        // Add more functions as needed
    } 
    else {
        cout << "Header file not found." << endl;
    }
  
}
int main() {
    displayHeaderFiles();
    displayDefinitions();
    string headerFile;
    cout << "Enter a header file: ";
    cin >> headerFile;
    displayFunctions(headerFile);
    return 0;
}