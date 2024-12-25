#include<iostream>
using namespace std;
int main() {
int secret=7;
int guess;
while(true) {
cout<<"guess the secret number:";
cin>>guess;
if(secret==guess){
cout<<"The secret number you have guessed is correct:"<<endl;
break;
} else {
cout<<"The secret number you have guessed is not correct . Try again:"<<endl;
}
}
}