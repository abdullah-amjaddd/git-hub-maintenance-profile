#include<iostream>
using namespace std;
int main() {
int i=1;
/* do while loop syntax
do {
c++ code
updation
} while(condition);*/
//Note that the do while loop execute atleast once irrevelant of the condition
// for example
do {
cout<<i<<endl;
i++;
} while(false);
return 0;
}
//the compiler outputs as 1 irrevelant that in while condition is false