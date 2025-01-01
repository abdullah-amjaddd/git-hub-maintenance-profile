#include <iostream>
using namespace std;
// A simple function that takes two integers and returns their sum
int add(int a, int b) {
return a + b;
}
// A function that takes two integers and returns their product
int multiply(int a, int b) {
return a * b;
}
int main() {
// Define a function pointer
int (*operation)(int, int);
// Dynamically assign the 'add' function to the function pointer
operation = add;
// Call the 'add' function using the function pointer
cout << "Calling 'add' through function pointer: " << operation(10, 20) << endl;
// Reassign the 'multiply' function to the function pointer
operation = multiply;
// Call the 'multiply' function using the function pointer
cout << "Calling 'multiply' through function pointer: " << operation(10, 20) << endl;
return 0;
}