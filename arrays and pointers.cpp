#include<iostream>
using namespace std;
//pointers and arrays
int main() {
int marks[4]={30,100,90,78};
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
marks[2]=345;//the value at index three can be changed
cout<<marks[2]<<endl;
int*p=marks;
cout<<*(p++)<<endl;
cout<<*p<<endl;
cout<<*(++p)<<endl;
/*cout<<"The value of *p is"<<"  "<<*p<<endl;
cout<<"The value of *(p+1) is"<<"  "<<*(p+1)<<endl;
cout<<"The value of *(p+2)  is"<<"  "<<*(p+2)<<endl;//note that the current value of array is printed 345 instead of 90
cout<<"The value of *(p+3) is"<<"  "<<*(p+3)<<endl;*/
return 0;
}
