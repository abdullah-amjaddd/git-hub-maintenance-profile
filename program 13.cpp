#include <iostream>
using namespace std;
// Function to add two integers
int add(int a, int b) {
return a + b;
}
// Function to add two doubles
double add(double a, double b) {
return a + b;
}
int main() {
int int1 = 5, int2 = 10;
double double1 = 5.5, double2 = 10.1;
// Call the overloaded function for integers
cout << "Addition of two integers (" << int1 << " + " << int2 << ") = " << add(int1, int2) << endl;
// Call the overloaded function for doubles
cout << "Addition of two doubles (" << double1 << " + " << double2 << ") = " << add(double1, double2) << endl;
return 0;
}