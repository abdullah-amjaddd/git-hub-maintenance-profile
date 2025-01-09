#include<iostream>
using namespace std;
int main() {
int a=8;//* (value at)dereference operator
int *b=&a;//&address-of operator
cout<<"The address of a is"<<&a<<endl;
cout<<"The address of a is"<<b<<endl;
cout<<"The value at address b is"<<*b<<endl;
//pointer-to-pointer
int**c=&b;//made a variable that stores the address of pointer as well
cout<<"The address of b is:"<<&b<<endl;
cout<<"The address of b is:"<<c<<endl;
cout<<"The value at address c is:"<<*c<<endl;
cout<<"The value at address value_at(value_at(c)):"<<**c<<endl;//this is the pointer to pointer concept
return 0;
}