#include<iostream>
using namespace std;
int main() {
int num1,num2;
cout<<"Enter two numbers:";
cin>>num1>>num2;
int sum;
sum=num1+num2;
cout<<"The sum is:"<<sum<<endl;
//Addition assignment operator assigning the updated value to the sum variable
sum+=2;
cout<<"The updated sum is:"<<sum<<endl;
return 0;
}