#include<iostream>
using namespace std;
int main() {
int a=70;
float y=46.6;
cout<<"The value of x is "<<(int)y<<endl;//Here we change the value of float into integer value 46 through type casting
cout<<"The value of x is "<<int(y)<<endl;//Both ways are the same and conversion will also remain the same
cout<<a+int(y)<<endl;//We can also sum the values of the converted values
cout<<a+(float)y<<endl;
}