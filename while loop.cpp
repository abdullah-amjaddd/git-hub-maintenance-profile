#include <iostream>
using namespace std;
int main() {
int n, sum = 0, i = 1;
cout << "Enter a number: ";
cin >> n;
while (i <= n) {
sum += i; // Add i to sum
i++; // Increment counter
}
cout << "Sum of numbers from 1 to " << n << " is " << sum << endl;
return 0;
}