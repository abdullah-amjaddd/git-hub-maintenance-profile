#include <iostream>
using namespace std;
int main() {
    char lower, upper;
    // Input a character
    cout << "Enter a lowercase character: ";
    cin >> lower;
    // Check if the character is a lowercase letter
if (lower >= 'a' && lower <= 'z') {
// Convert to uppercase
upper = lower - ('a' - 'A');
cout << "The uppercase character is: " << upper << endl;
} else {
// Error message for invalid input
cout << "Error: Input is not a lowercase character." << endl;
}
return 0;
}