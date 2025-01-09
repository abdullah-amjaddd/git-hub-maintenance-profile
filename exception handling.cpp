#include<iostream>
using namespace std;
int main() {
int num1,num2;
try {
cout<<"Enter the first integer:";
if(!(cin >>num1)) {
throw"Input is not an integer!";
}
cout<<"Enter the second integer:";
if(!(cin >>num2)) {
throw"Input is not an integer!";
}
int sum=num1+num2;
cout<<"The sum of "<<num1<<"and"<<num2<<"is:"<<sum<<endl;
} catch(const char* abc) {
cout<<"Exception:"<<abc<<endl;//exception handling concept
}
return 0;
}