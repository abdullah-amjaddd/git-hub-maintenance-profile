#include<iostream>
using namespace std;
enum Direction{Up,Down,Left,Right};
int main() {
Direction dir=Right;
switch(dir) {
case Up:
cout<<"Moving Up!"<<endl;
break;
case Down:
cout<<"Moving Down!"<<endl;
break;
case Left:
cout<<"Moving Left!"<<endl;
break;
case Right:
cout<<"Moving Right!"<<endl;
break;
default:
cout<<"Unknown Direction!"<<endl;
break;
}
}