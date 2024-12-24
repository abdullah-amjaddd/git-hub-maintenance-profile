#include <iostream>
using namespace std;
int main() {
char operation;
double num1, num2;
// Display options to the user
cout << "Simple Calculator\n";
cout << "Enter an operation (+, -, *, /): ";
cin >> operation;
// Get two numbers from the user
cout << "Enter two numbers: ";
cin >> num1 >> num2;
// Perform the chosen operation
switch (operation) {
case '+':
cout << "Result: " << num1 + num2 << endl;
break;
case '-':
cout << "Result: " << num1 - num2 << endl;
break;
case '*':
cout << "Result: " << num1 * num2 << endl;
break;
case '/':
if (num2 != 0) {
cout << "Result: " << num1 / num2 << endl;
} else {
cout << "Error: Division by zero is not allowed." << endl;
}
break;
default:
cout << "Error: Invalid operation." << endl;
}
return 0;
}