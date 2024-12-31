#include<iostream>
using namespace std;
int main() {
int x,y,temp;
cout<<"Enter the first number:";
cin>>x;
cout<<"Enter the second number:";
cin>>y;
cout<<"Enter the temporary number:";
cin>>temp;
temp=x;
x=y;
y=temp;
cout<<x<<"    "<<y<<endl;
return 0;
}