#include<iostream>
using namespace std;
void function(int a) {
cout<<"Enter a number:"<<a<<endl;
}
void function(double a) {
cout<<"Enter a floating point number:"<<a<<endl;
}
void function(string str) {
cout<<"Enter your name:"<<str<<endl;
}
int main() {
function(19);//function overloading
function(3.0);
function("Virus");
return 0;
}