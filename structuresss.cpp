#include<iostream>
using namespace std;
struct Employee {
int age;
string name;
float salary;
};
int main() {
Employee employee[3]={{19,"Amjad",23000.8},{25,"Abdullah",3400.670},{46,"Umair",900.360}};
for(int i=0;i<3;i++) {
cout<<" The age of the employee is :   "<<employee[i].age<<endl;
cout<<" The name of the employee is :"<<employee[i].name<<endl;
cout<<" The salary of the employee is:  "<<employee[i].salary<<endl;
}
return 0;
}