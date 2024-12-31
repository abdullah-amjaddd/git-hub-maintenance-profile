#include<iostream>
using namespace std;
int c=45;//Global Variable
int main() {
int a,b,c;//Local Variable
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
c=a+b;
cout<<"The sum is :"<<c<<endl;
cout<<"The global c is:"<<::c<<endl;//as both the c is having value conflict so we are using scope resolution operator(::) to print the global variable
return 0;
}