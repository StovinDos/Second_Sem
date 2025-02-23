#include <iostream>
#include <string>
using namespace std;

string Cipher(const string& text, int shift) {

	string afterCipher = "";

	for (char ch : text) {

		if (ch >= 'a' && ch <= 'z') {

			afterCipher += (ch - 'a' + shift) % 26 + 'a';

		}
		else if (ch >= 'A' && ch <= 'Z') {

			afterCipher += (ch - 'A' + shift) % 26 + 'A';

		}
		else{
			afterCipher += ch;
		}

		
	}
         return afterCipher;
}

int main() {

	string text;
	int shift;

	cout << "Enter text: ";
	cin >> text;
	cout << "Enter ciphering notation: ";
	cin >> shift;
	
	string encryptedtext = Cipher(text, shift);
	cout << encryptedtext << endl;

}
