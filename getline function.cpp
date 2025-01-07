#include<iostream>
using namespace std;
int main() {
string name;
cout<<"Enter your name:";
cin>>name;
getline(cin,name);//using getline function to get spaces between the characters i enter on tghe console
cout<<name;
return 0;
}