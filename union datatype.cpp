#include <iostream>
using namespace std;
union Data {
int intValue;
float floatValue;
char charValue;
};
int main() {
Data data;
// Store and access an integer
data.intValue = 42;
cout << "Integer value: " << data.intValue << endl;
// Store and access a float
data.floatValue = 3.14;
cout << "Float value: " << data.floatValue << endl;
// Store and access a character
data.charValue = 'A';
cout << "Character value: " << data.charValue << endl;
// Demonstrate shared memory
cout << "Integer value after storing char: " << data.intValue << endl;//this gives us a garbage value
return 0;
}