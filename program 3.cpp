#include<iostream>
using namespace std;
int function(int a,int b) {
cout<<"Enter first number:";
cin>>a;
cout<<"Enter second number:";
cin>>b;
cout<<"The sum is:"<<a+b;
return a+b;
}
int main() {
int num1,num2;
cout<<"Enter the first number:";
cin>>num1;
cout<<"Enter the second number:";
cin>>num2;
int result=num1+num2;
cout<<"The sum of two number is :"<<result<<endl;
return 0;
}