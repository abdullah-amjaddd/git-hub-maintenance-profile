#include <iostream>
#include <string>
using namespace std;
// Structure to hold student details
struct Student {
string name;
int rollNumber;
int marks[3];
int totalMarks;
};
// Function to add a student's details
void addStudent(Student &student) {
cout << "Enter Name: ";
cin >> student.name;
cout << "Enter Roll Number: ";
cin >> student.rollNumber;
cout << "Enter Marks for 3 subjects: ";
for(int i = 0; i < 3; i++) {
cin >> student.marks[i];
}
// Calculate total marks
student.totalMarks = 0;
for (int i = 0; i < 3; i++) {
student.totalMarks += student.marks[i];
}
cout << "Student details added successfully!\n";
}
// Function to display a student's details
void displayStudent(const Student &student) {
cout << "Student Details:\n";
cout << "Name: " << student.name << endl;
cout << "Roll Number: " << student.rollNumber << endl;
cout << "Marks: ";
for (int i = 0; i < 3; i++) {
cout << student.marks[i] <<endl;
}
cout << "Total Marks: " << student.totalMarks << endl;
}
int main() {
Student student;
cout << "Adding a Student\n";
addStudent(student);
cout << "Displaying a Student\n";
displayStudent(student);
return 0;
}