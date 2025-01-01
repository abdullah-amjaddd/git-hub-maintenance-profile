#include<iostream>
using namespace std;
void function(int a) {
cout<<"Enter an integer:"<<a<<endl;;
}
void function(double a) {
cout<<"Enter a floating point number:"<<a<<endl;
}
void function(char a) {
cout<<"Enter a character:"<<a<<endl;
}
void function(string str) {
cout<<"Enter a string:"<<str<<endl;
}
int main() {
function(250);
function(0.1);//function overloading compiler will indicate the same functions according to the parameter passed and their data type to print the
function('c');//desired values 
function("Hello world");
return 0;
}