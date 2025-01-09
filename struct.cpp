#include<iostream>
using namespace std;
struct Car{
string colour;
float price;
int model;
}; Car C1;//structure variable declared outside the main function
int main() {
	//Car C1;//also can be declared inside the main choice is yours
C1.colour="Red";
C1.price=300.90;
C1.model=2023;
cout<<"The colour of the car is:"<<C1.colour<<endl;
cout<<"The price of the car is:"<<C1.price<<endl;
cout<<"The model of the car is:"<<C1.model<<endl;
return 0;
}