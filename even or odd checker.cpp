#include<iostream>
using namespace std;
int main() {
int marks;
cout<<"Enter your marks:";
cin>>marks;
char grade[5]={'A','B','C','D','E'};//array used to store the grades
if(marks>=90) {
cout<<"Your grade is:"<<grade[0]<<endl;
}
else if(marks>=75) {
cout<<"Your grade is:"<<grade[1]<<endl;
}
else if(marks>=65) {
cout<<"Your grade is:"<<grade[2]<<endl;
}
else if(marks>=60) {
cout<<"Your grade is:"<<grade[3]<<endl;
} else {
cout<<"Your grade is:"<<grade[4]<<endl;
}
return 0;
}