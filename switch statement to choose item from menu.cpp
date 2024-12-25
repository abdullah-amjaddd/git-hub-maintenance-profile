#include <iostream>
using namespace std;
int main() {
int choice;
cout << "Select a fruit by entering the corresponding number:" << endl;
cout << "1. Apple" << endl;
cout << "2. Banana" << endl;
cout << "3. Grapes" << endl;
cout << "4. Pomegranate" << endl;
cout << "5. Peach" << endl;
cout << "Enter your choice (1-5): ";
cin >> choice;
switch (choice) {
case 1:
cout << "You selected Apple!" << endl;
break;
case 2:
cout << "You selected Banana!" << endl;
break;
case 3:
cout << "You selected Grapes!" << endl;
break;
case 4:
cout << "You selected Pomegranate!" << endl;
break;
case 5:
cout << "You selected Peach!" << endl;
break;
default:
cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
break;
}
    return 0;
}