#include<iostream>
using namespace std;
int main() {
int rows;
int columns;
cout<<"Enter the number of rows:";
cin>>rows;
cout<<"Enter the number of columns:";
cin>>columns;
for(int i=1;i<=rows;i++) {
for(int j=1;j<=columns;j++) {
cout<<j;
}
cout<<i<<endl;
}
return 0;
}