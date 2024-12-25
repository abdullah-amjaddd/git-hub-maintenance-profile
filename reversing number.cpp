#include<iostream>
using namespace std;
int main() {
int num;
cout<<"Enter a number:";
cin>>num;
int reversed=0;
while(num>0) {
int digit=num%10; //num%10 will extract the last digit
reversed=reversed*10+digit;
num/=10;//This process will remove the last digit
}
cout<<"The reversed number is:"<<reversed<<endl;
return 0;
}