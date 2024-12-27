#include <iostream>
using namespace std;
// Global variable
int globalVar = 100;
void display() {
// Local variable
int localVar = 10; 
cout << "Inside display function:" << endl;
cout << "Local Variable: " << localVar << endl;
cout << "Global Variable: " << globalVar << endl;
}
int main() {
// Local variable
int localVar = 20;
cout << "Inside main function:" << endl;
cout << "Local Variable: " << localVar << endl;
cout << "Global Variable: " << globalVar << endl;
// Call another function
display();
// Modify global variable
globalVar = 200;
cout << "Modified Global Variable: " << globalVar << endl;
return 0;
}