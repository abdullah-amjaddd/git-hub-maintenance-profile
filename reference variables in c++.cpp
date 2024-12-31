#include<iostream>
using namespace std;
int main() {
int x=455;
int & y=x;//Reference variable is created with the help of & referencing to value of x initialized above
cout<<x<<endl;
cout<<y<<endl;
return 0;
}