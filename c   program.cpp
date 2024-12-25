#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int num, searchElement;
    bool found = false;
    // Taking 10 elements as input from the user
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }
    // Asking the user to enter the number to search
    cout << "Enter the number you want to search: ";
    cin >> searchElement;
    // Searching for the element in the array
    for (int i = 0; i < 10; ++i) {
        if (arr[i] == searchElement) {
            found = true;
            break;
        }
    }
    // Printing the result
    if (found) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    return 0;
}