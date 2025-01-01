#include <iostream>
using namespace std;
class ObjectCounter {
private:
// Static variable to keep track of object count
static int count;
public:
// Constructor increments the object count
ObjectCounter() {
count++;
}
// Static function to get the object count
static int getObjectCount() {
return count;
}
};
// Definition and initialization of the static variable
int ObjectCounter::count = 0;
int main() {
cout << "Initial object count: " << ObjectCounter::getObjectCount() << endl;
// Create objects of the class
ObjectCounter obj1;
ObjectCounter obj2;
cout << "Object count after creating two objects: " << ObjectCounter::getObjectCount() << endl;
ObjectCounter obj3;
cout << "Object count after creating another object: " << ObjectCounter::getObjectCount() << endl;
return 0;
}