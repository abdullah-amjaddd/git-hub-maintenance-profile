#include<iostream>
using namespace std;
int main() {
char lower,upper;
cout<<"Enter a uppercase character:";
cin>>upper;
if(upper>='A'&& upper<='Z') {
lower=upper-('A'-'a');
cout<<"The lowercase character is:"<<lower<<endl;
} else {
cout<<"Input is not an uppercase character:"<<endl;
}
return 0;
}
