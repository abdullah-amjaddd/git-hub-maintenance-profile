#include<iostream>
using namespace std;
struct Employee{
string name;
int id;
double salary;
};
void addEmployee(Employee &employee) {
cout<<"Enter the name of the employee:";
cin>>employee.name;
cout<<"Enter the id of the employee:";
cin>>employee.id;
getline(cin,employee.name);
cout<<employee.name;
cout<<"Enter the salary of the employee:";
cin>>employee.salary;
cout<<"Details added successfully:"<<endl;
}
void displayEmployee(const Employee &employee) {
cout<<"Employee name:"<<employee.name<<endl;
cout<<"Employee id:"<<employee.id<<endl;
cout<<"Employee salary:"<<employee.salary<<endl;
}
int main() {
Employee employee;
cout<<"Add employee:"<<endl;
addEmployee(employee);
cout<<"display employee:"<<endl;
displayEmployee(employee);
return 0;
}