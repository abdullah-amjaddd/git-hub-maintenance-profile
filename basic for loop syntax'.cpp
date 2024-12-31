#include<iostream>
using namespace std;
int main() {
int num=15;
//Syntax for loop
//for(initialization;condition;updation) //initialization is done once only at the beginning
//the loop continues as long as the condition is true and destroyed when the condition is false
for(int i=0;i<=num;i++) { //as long as the value is not greaater than 15 it cntinues the whole process and when condition is false it jumps out of the loop
cout<<i<<endl;
}
return 0;
}