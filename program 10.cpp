#include <iostream>
using namespace std;
// Function to modify parameters passed by reference
void modifyValues(int &num1, int &num2) {
    num1 += 10; // Increment the first parameter by 10
    num2 *= 2;  // Double the second parameter
    cout<<"Inside modifyValues function: num1 = "<<num1<<",num2="<<num2<<endl;
}
int main() {
int a = 5, b = 3;
    cout << "Before calling modifyValues: a = "<<a<<",b="<<b << endl;
// Call the function and pass variables by reference
modifyValues(a, b);
// Observe the changes reflected in the original variables
cout<<"After calling modifyValues: a ="<<a<<",b="<<b<<endl;
return 0;
}