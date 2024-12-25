#include<iostream>
using namespace std;
int main() {
int num;
int i=1;
cout<<"Enter the number:";
cin>>num;
while(i<=10) {
cout<<num<<"x"<<i<<"="<<num*i<<endl;
i++;
}
return 0;
}