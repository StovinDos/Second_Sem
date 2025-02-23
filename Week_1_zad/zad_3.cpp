#include <iostream>
#include <string>
using namespace std;

int main() {

	int a, b, c;
	cin >> a, cin >> b, cin >> c;

	bool checkOne = a > b ? true : false;
	bool checkTwo = a > c ? true : false;
	bool checkThree = b > c ? true : false;

	// check for a biggest
	if (checkOne){
		if (checkTwo){
			cout << a << " is the biggest";
			if (checkThree) {
				cout << b << " is the middle value and " << c << " is the lowest value";
			}
			else {
				cout << c << " is the middle value and " << b << " is the lowest value";
			}
		}
	}


	// check for b biggest
	else if (checkThree){
		cout << b <<" is the biggest";
		if (checkTwo){

			cout << a << " is the middle value and " << c << " is the lowest value";
		}
		else {
			cout << c << " is the middle value and " << a << " is the lowest value";
			return 0;
		}
	}


	//check for c biggest
	else if (checkTwo == false) {
		if (checkTwo == false) {
			cout << c << " is the biggest";
			if (checkOne) {
				cout << a << " is the middle value and " << b << " is the lowest value";
			}
			else {
				cout << b << " is the middle value and " << a << " is the lowest value";
				return 0;
			}
		}
	}
}
