#include<iostream>
#include<cmath>
using namespace std;
int main() {
int a=45,b=26,c=32;
cout<<"The final value is : "<<a+b-c<<endl;//here the precedence of + and - is same so associatvity rule will be applied from left to right
cout<<"The final value is :"<<a*b/c<<endl;//here the precedence of * and / is same so associatvity rule will be applied from left to right
cout<<(((a/b)*b)+a)-c<<endl;//parenthesis is a vital part in this expression
return 0;
}