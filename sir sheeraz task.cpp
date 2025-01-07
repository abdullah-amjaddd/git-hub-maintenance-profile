#include<iostream>
using namespace std;
struct student {
int id;
char name[20];
float gpa;
};
student getStudentData() {//getStudentData is a udf which have the values of the student
student s;//structure variable is declared to temporary hold the student's data
cout<<"Enter Student Id:";
cin>>s.id;
cout<<"Enter Student name:";
cin>>s.name;
cout<<"Enter Student gpa:";
cin>>s.gpa;
return s;
}
int main() {
student std=getStudentData();
cout<<"Details:"<<endl;
cout<<"Enter the student id:"<<std.id<<endl;
cout<<"Enter the student id:"<<std.name<<endl;
cout<<"Enter the student id:"<<std.gpa<<endl;
return 0;
}