#include<iostream>
using namespace std;
void abdullah(int a,int b);//function declaration
void abdullah(int a,int b) {//function definition
cout<<"Enter the first number:"<<a<<endl;
cout<<"Enter the second number:"<<b<<endl;
}
void function1(double a,double b);
void function1(double a,double b) {//function definition
cout<<"Enter the first decimal number:"<<a<<endl;
cout<<"Enter the second decimal  number:"<<b<<endl;
}
void function2(string str,string ptr);
void function2(string str,string ptr) {//function definition
cout<<"Enter your first name:"<<str<<endl;
cout<<"Enter your last name:"<<ptr<<endl;
}
int main() {
abdullah(7,15);
function1(3.14,2.67);
function2("Abdullah","Amjad");
return 0;
}