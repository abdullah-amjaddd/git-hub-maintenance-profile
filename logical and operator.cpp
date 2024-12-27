#include<iostream>
using namespace std;
int main() {
int num1=8;
int num2=10;
//Relational operators and logical and operator
cout<<"The value of this logical and operator:"<<((num1==num2) && (num1>0))<<endl;//logical and operator
cout<<"The value of this logical or operator:"<<((num1==num2) || (num1>0))<<endl;//logical or operator
cout<<"The value of this logical and operator:"<<(!(num1==num2))<<endl;//logical not operator
return 0;
}