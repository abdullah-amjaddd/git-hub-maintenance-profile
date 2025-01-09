#include<iostream>
using namespace std;
int main() {
for(int i=0;i<=10;i++) {
if(i==2) {
continue;//continues statement skips the current iteration and without printing it move to the next iterations
}
cout<<i<<endl;
}
return 0;
}