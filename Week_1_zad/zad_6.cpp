#include <iostream>
#include <cmath>

using namespace std;

void real(double a, double b);
void full(int a, int b);

int main() {

	double a, b;
	cin >> a >> b;
	
	real(a, b);

	a = round(a); b = round(b);
	full(a, b);
	
	
}

void real(double a, double b) {

	double per = 0;
	double S = 0;

	per = a * 2 + b * 2;
	S = a * b;

	cout << S << " " << per << endl;


}

void full(int a, int b) {

	int per = 0;
	int S = 0;

	per = a * 2 + b * 2;
	S = a * b;
	

	cout << S << " " << per << endl;

}
