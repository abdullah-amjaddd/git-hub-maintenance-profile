#include<iostream>
using namespace std;
void swapreferencevar(int &a,int &b) {
int temp=a;//the current value of temp is 4
a=b;//the current value of a is 5
b=temp;//the current value of b is 4
}
int main() {
int x=4;
int y=5;
cout<<"The value of x is "<<x<<"the value of y is"<<y<<endl;
swapreferencevar(x,y);//function calling by reference such that the value of x and y is swapped referencing values of a and b
cout<<"The value of x is "<<x<<"the value of y is"<<y<<endl;
return 0;
}