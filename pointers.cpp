#include<iostream>
using namespace std;
int main() {
//pointers are the data types which hold the address of other data types
int a=3;
int*b=&a;
//&address-of operator
//* dereference operator
//b variable holds the address of a
cout<<"the address of a is"<<&a<<endl;
cout<<"the address of a is"<<b<<endl;
return 0;
}