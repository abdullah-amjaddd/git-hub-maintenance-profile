#include <iostream>
using namespace std;
// Function to calculate the product of two integers
int function(int a, int b) {
return a * b;
}
int main() {
int num1, num2;
// Input two numbers from the user
cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;
// Call the function and store the result
int product = function(num1, num2);
// Output the result
cout << "The product of the two numbers is: " << product << endl;
return 0;
}