#include<iostream>
using namespace std;
void function1(void) {
//void has no return type
}
int function2(int a) {
cout<<"Enter a number:"<<a<<endl;
return a;//return type
}
double function3(double a) {
cout<<"Enter a decimal number:"<<a<<endl;
return a;//return type
}
int main() {
function1();
function2(50);
function3(3.00);
return 0;
}
