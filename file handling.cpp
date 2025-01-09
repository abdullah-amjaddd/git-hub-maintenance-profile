#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
string filename, data;
cout << "Enter the filename to save data (e.g., data.txt): ";
cin >> filename;
cin.ignore();
cout << "Enter the data you want to save to the file: " << endl;
getline(cin, data);
ofstream outfile(filename);
if (outfile.is_open()) {
outfile << data;
outfile.close();
cout << "Data saved successfully in " << filename << endl;
} else {
cout << "Error: Unable to open file for writing." << endl;
return 1;
}
ifstream infile(filename);
if (infile.is_open()) {
cout << "\nReading data from the file:" << endl;
string line;
while (getline(infile, line)) {
cout << line << endl;
}
infile.close();
} else {
cout << "Error: Unable to open file for reading." << endl;
return 1;
    }
    return 0;
}