#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

cout << "From which file do you want to read: ";
string filename;
cin >> filename;

ifstream inputfile(filename + ".txt");
if (!inputfile) {
    cout << "File does not exist" << endl;
    return 1;
}

string line;


while (getline(inputfile, line)) {

    string reversedLine;
    for (int i = line.size() -1 ; i >= 0; i--) {
        reversedLine += line[i];
    }
    cout << reversedLine << endl;

}
inputfile.close();
cout << "File read successfully." << endl;

}