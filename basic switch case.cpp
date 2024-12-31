#include<iostream>
using namespace std;
int main(){
int menu;
int choice;
// displaying the menu t the customer
cout<<"Welcome to the menu express "<<endl;
cout<<"What would you like to order sir"<<endl;
cout<<"1 . Zinger Burger:"<<endl;
cout<<"2 .Club Sandwich:"<<endl;
cout<<"3 . crispy roll:"<<endl;
cout<<"4 . French Fries:"<<endl;
cout<<"5 . Beverages:"<<endl;
cout<<"6 . Exit:"<<endl;
cout<<"Enter your choice:";
cin>>choice;
switch(choice) { //using switch statement part of selection structure to handle the user choice
case 1 :
cout<<"You have selected zinger burger :"<<endl;
break; //break statement is used to exit out of the switch statement and print the appropriate case //if break statement is not used after each case compiler will fall through to the next case after printing app case instead of exiting switch statement
case 2 :
cout<<"You have selected club sandwich :"<<endl;
break;
case 3 :
cout<<"You have selected crispy roll:"<<endl;
break;
case 4 :
cout<<"You have selected French Fries :"<<endl;
break;
case 5 :
cout<<"You have selected beverages :"<<endl;
break;
case 6:
cout<<"You have selected exit :"<<endl;
default:
cout<<"You have selected invalid choice try again:"<<endl;
break;
}
return 0;
}