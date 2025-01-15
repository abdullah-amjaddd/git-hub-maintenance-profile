#include <iostream>
using namespace std;
int main() {
string correctPassword = "password123";  // Predefined correct password
string enteredPassword;
int attempts = 0;
const int maxAttempts = 3;
// Label for the retry loop
start:
// Ask user for password input
cout << "Enter your password: ";
cin >> enteredPassword;
// Check if the entered password matches the correct one
if (enteredPassword == correctPassword) {
cout << "Welcome!" << endl;
return 0; // Exit the program successfully if the password is correct
} else {
attempts++;
if (attempts < maxAttempts) {
cout << "Incorrect password. Try again." << endl;
goto start;  // Retry if incorrect password and attempt limit not reached
} else {
cout << "Too many failed attempts. Exiting program." << endl;
return 1;  // Exit with an error code after exceeding max attempts
}
}
}