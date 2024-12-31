#include<iostream>
using namespace std;
int main() {
float d=34.5f;//this method is use to tell the compiler that the values we are declaring are of which data type to avoid conflicts usually happens in
//function overloading
long double e=34.5l;
cout<<"The size of 34.5 is:"<<sizeof(34.5)<<endl;
cout<<"The size of 34.5f is:"<<sizeof(34.5f)<<endl;
cout<<"The size of 34.5F is:"<<sizeof(34.5F)<<endl;
cout<<"The size of 34.5l is:"<<sizeof(34.5l)<<endl;
cout<<"The size of 34.5L is:"<<sizeof(34.5L)<<endl;
//the sizeof keyword is used to determine the size of the values we are interpreting often result in bytes
return 0;
}