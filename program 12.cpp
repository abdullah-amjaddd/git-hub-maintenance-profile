#include <iostream>
using namespace std;
// Recursive function to calculate factorial
int factorial(int n) {
if (n <= 1) {
return 1; // Base case: factorial of 0 or 1 is 1
}
return n * factorial(n - 1); // Recursive case
}
int main() {
int number;
cout << "Enter a number to calculate its factorial: ";
cin >> number;
if (number < 0) {
cout << "Factorial is not defined for negative numbers." << endl;
} else {
int result = factorial(number);
cout << "The factorial of " << number << " is: " << result << endl;
}
return 0;
}