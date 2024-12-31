#include<iostream>
using namespace std;
int main() {
string name;
cout<<"Enter the name of the person:"<<endl;
cin>>name;
int age;
cout<<"Enter the age of the person:"<<endl;
cin>>age;
// selection control structure
if(age<18 && age<0) { //if else or else if ladder
cout<<"You are not eligible to vote:"<<endl;
} else if(age==18) {
cout<<"You can vote until your Cnic is verified:"<<endl;
}
else if (age<1) {
cout<<"You are not yet born :"<<endl;
}
 else {
cout<<"You are eligible to vote:"<<endl;
}
return 0;
}