#include <iostream>
#include <string>
using namespace std;
struct student {
int id;
string name;
int marks[5];
};
struct student udf1(student xyz);
int udf2(int x);
int main() {
student s1;
cout << "Enter your id: ";
cin >> s1.id;
cout << "Enter your name: ";
cin >> s1.name;
for (int i = 0; i < 5; i++) {
cout << "Enter your marks " << i + 1 << " : ";
cin >> s1.marks[i];
}
udf1(s1);
return 0;
}
struct student udf1(student xyz) {
int min;
cout << "Your id: " << xyz.id << endl;
// Find the minimum mark
min = xyz.marks[0];
for (int i = 1; i < 5; i++) {
if (min > xyz.marks[i]) {
min = xyz.marks[i];
}
}
cout << "Minimum: " << min << endl;
// Call udf2 to calculate the sum of min and max
int res = udf2(min);
cout << "The sum of min and max: " << res << endl;
return xyz;
}
int udf2(int x) {
int ans;
student abc = {15, "Ali", {54, 67, 45, 87, 23}};
// Find the maximum mark in abc.marks
int max = abc.marks[0];
for (int i = 1; i < 5; i++) {
if (max < abc.marks[i]) {
max = abc.marks[i];
}
}
// Calculate the sum of min and max
ans = x + max;
return ans;
}