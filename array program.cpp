#include <iostream>
using namespace std;
int main() {
int num;
int searchNumber;
int arr[10];
bool found =false;
cout<<"Enter 10 numbers:"<<endl;
for(int i=0;i<=10;i++) {
cin>>arr[i];
}
cout<<"Enter the number you want to search:";
cin>>searchNumber;
for(int i=0;i<=10;i++) {
	if(searchNumber==arr[i]) {
		found=true;
		break;
	}
}
if(found) {
	cout<<"found"<<endl;
} else {
	cout<<"Not found:"<<endl;
}
return 0;
}