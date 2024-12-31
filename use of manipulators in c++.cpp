#include<iostream>
#include<iomanip>//headerfile used to include functions like setw() to control manipulation or execute in c++
using namespace std;
int main() {
int x=45;
int y=40;
int z=50;
cout<<"The value of x is:"<<x<<endl;//endl is a manipulator used to end the line and move the cursor at the beginning of the next line
cout<<"The value of y is:"<<y<<endl;
cout<<"The value of z is:"<<z<<endl;
cout<<"The value of x with setw is:"<<setw(4)<<x<<endl;//here setw function is used to set the width of the printing  value and after width is applied then print the current value
cout<<"The value of y with setw is:"<<setw(4)<<y<<endl;
cout<<"The value of z with setw is:"<<setw(4)<<z<<endl;
return 0;
}
