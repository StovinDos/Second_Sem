#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main(){



cout << "From which file do you want to read: ";
string fileName;
cin >> fileName;

ifstream inputFile(fileName + ".txt");
if (!inputFile) {
    cout << "File does not exist" << endl;
    return 1;
}

string line;

while (getline(inputFile, line)) {
    cout << line << endl;
}








}