#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

cout << "Write the name of the file: ";
string fileName;
cin >> fileName;


ofstream outputFile(fileName +".txt");
if (!outputFile) {
    cout << "File exists" << endl;
    return 1;
}

while (true) {
    
cout << "Enter a string (or 'exit' to quit): ";
    string input;
    cin >> input;


    if (tolower(input[0]) == 'e' && input.size() == 4) {
        break;
    }

    outputFile << input << endl;

}

outputFile.close();
cout << "File written successfully." << endl;
}