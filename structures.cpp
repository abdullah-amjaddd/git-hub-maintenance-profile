#include<iostream>
using namespace std;
struct Mobilephone {
int size;
string name;
float price;
}; Mobilephone m1 = {6, "Samsung Galaxy", 799.99};  // Example values
int main() {
// Initialize struct m1 with values

// Now print the values of m1
cout << "The size of the smart phone is: " << m1.size << endl;
cout << "The name of the smart phone is: " << m1.name << endl;
cout << "The price of the smart phone is: " << m1.price << endl;
return 0;
}