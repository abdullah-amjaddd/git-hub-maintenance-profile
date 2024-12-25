#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cout<<"Enter the value of two number:";
	cin>>n1>>n2;
	int fact1;
	for(int i=2;i<=n1;i++) {
		fact1=fact1*i;
		cout<<"The value of fact 1 is :"<<fact1<<endl;
	}
	int fact2;
	for(int i=2;i<=n2;i++) {
		fact2=fact2*i;
		cout<<"The value of fact 2 is :"<<fact2<<endl;
	return 0;
}
}