#include<iostream>
using namespace std;
int function(int a) {//parameter passing
return a;
}
int main() {
int num;
cout<<"Enter a number:";
cin>>num;
int result=function(num);//no actual value is passed
cout<<result<<endl;
}