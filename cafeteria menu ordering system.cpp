#include <iostream>
using namespace std;
int main() {
    int choice;
    double totalBill = 0.0;
    // Display menu in a loop
    do {
        // Display the menu options
        cout << "Welcome to the Cafeteria Menu Ordering System!" << endl;
        cout << "Please choose an option from the menu below:" << endl;
        cout << "1. Tea - $2" << endl;
        cout << "2. Coffee - $3" << endl;
        cout << "3. Sandwich - $5" << endl;
        cout << "4. Burger - $7" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
cin >> choice;
// Handle choices using switch
switch(choice) {
case 1:
cout << "You selected Tea. Adding $2 to your bill." << endl;
totalBill += 2;
break;
case 2:
cout << "You selected Coffee. Adding $3 to your bill." << endl;
totalBill += 3;
break;
case 3:
cout << "You selected Sandwich. Adding $5 to your bill." << endl;
totalBill += 5;
break;
case 4:
cout << "You selected Burger. Adding $7 to your bill." << endl;
totalBill += 7;
break;
case 5:
cout << "Thank you for visiting! Exiting..." << endl;
break;
default:
cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
break;
}
} while (choice != 5);
    // Display total bill
    cout << "Your total bill is: $" << totalBill << endl;
    return 0;
}