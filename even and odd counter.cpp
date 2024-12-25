#include<iostream>
using namespace std;
int main() {
int num;
int evenCount,oddCount;
while(true) {
cout<<"Enter a number:";
cin>>num;
if(num==0) {
break;
}
if (num%2==0) {
evenCount++;
} else {
oddCount++;
}
}
cout<<"The total even numbers are:"<<evenCount<<endl;
cout<<"The total odd numbers are:"<<oddCount<<endl;
return 0;
}
