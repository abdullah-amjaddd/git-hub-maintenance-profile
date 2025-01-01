#include <iostream>
using namespace std;
// Function to modify the parameter passed by value
void modifyValue(int num) {
// Modify the local copy of the parameter
num =42;
cout<<"Inside modifyValue function, num is now: "<<num<<endl;
}
int main() {
int original = 10;
cout<< "Before calling modifyValue, original is: "<<original<<endl;
// Call the function and pass 'original' by value
modifyValue(original);
// Observe that 'original' remains unchanged
cout<< "After calling modifyValue, original is still: "<<original<<endl;
return 0;
}