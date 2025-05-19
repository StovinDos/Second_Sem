#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main() {

string filename;
cin >> filename;

ifstream changeFile(filename +".txt");
if (!changeFile)
{
    cout << "File does not exist" << endl;
    return 1;
}

string wordToReplace;
string newWord;

cin >> wordToReplace;
cin >> newWord;

string line;

filename += "_new";
ofstream outputFile(filename + ".txt");

while (getline(changeFile, line)) {

    size_t pos = line.find(wordToReplace);
    while (pos != string::npos) {
        line.replace(pos, wordToReplace.length(), newWord);
        pos = line.find(wordToReplace, pos + newWord.length());
    }
     outputFile << line << endl;

}


changeFile.close();
outputFile.close();
}