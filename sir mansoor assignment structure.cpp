#include<iostream>
using namespace std;
struct Student {
string name;
int rollno;
float marks[3];
int Totalmarks;
};
void addStudent(Student &student) {//
cout<<"Enter name:";
cin>>student.name;
cout<<"Enter rollno:";
cin>>student.rollno;
cout<<"Enter marks for three subjects:"<<endl;
for(int i=0;i<3;i++) {
cin>>student.marks[i];
student.Totalmarks=0;
student.Totalmarks+=student.marks[i];
cout<<"Students detail added successfully:"<<endl;
}
}
void displayStudent (const Student &student) { //Takes a constant reference to the Student structure.
cout<<"The name of the student is:"<<student.name<<endl;
cout<<"The rollno of the student is:"<<student.rollno<<endl;
cout<<"The marks of the student for three subject is:";
for(int i=0;i<3;i++) {
cout<<"student.marks[i]"<<endl;
}
cout<<"Total marks:"<<student.Totalmarks<<endl;
}
int main() {
Student student;
cout<<"Adding a student:"<<endl;
addStudent(student);//function call
cout<<"Displaying a student:"<<endl;
displayStudent(student);
return 0;
}