#include<iostream>
using namespace std;
int main() {
cout<<"Start of program."<<endl;
jump:
goto jump;
cout<<"This line is skipped."<<endl;
cout<<"Jumped to this line!"<<endl;
return 0;
}
