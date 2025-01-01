#include<iostream>
using namespace std;
int Findmax(int Maxfunction1,int Maxfunction2) {
if (Maxfunction1>Maxfunction2) {
return 	Maxfunction1;
} else {
return Maxfunction2;
}
}
int main() {
int num1,num2;
cout<<"Enter the first function:";
cin>>num1;
cout<<"Enter the second function:";
cin>>num2;
int result=Findmax(num1,num2) ;//the maximum value is passed to the function call calculated using if else in the
cout<<"The maximum function is:"<<result<<endl;//function findmax
return 0;
}