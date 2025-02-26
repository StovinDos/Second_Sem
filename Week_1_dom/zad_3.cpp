#include <iostream>

using namespace std;

struct ComplexNumbers{
    int a, b ,c ,d;
};

//function to enter the complex number
void enterComplexNumber(ComplexNumbers &number){
    cin >> number.a >> number.b;
    cin >> number.c >> number.d;
}

//function to add the complex numbers
void addComplexNumbers(ComplexNumbers number){
    int real = number.a + number.c;
    int imaginary = number.b + number.d;

    if (real == 0) cout << imaginary << "i" << endl;
    else if (imaginary == 0) cout << real << endl;
    else cout << real << " + " << imaginary << "i" << endl;
}

//function to subtract the complex numbers
void subtractComplexNumbers(ComplexNumbers number){
    int real = number.a - number.c; 
    int imaginary = number.b - number.d;

    if (real == 0) cout << imaginary << "i" << endl;
    else if (imaginary == 0) cout << real << endl;
    else cout << real << " + " << imaginary << "i" << endl;
}

//function to multiply the complex numbers
void multiplyComplexNumbers(ComplexNumbers number){
    int real = (number.a * number.c) - (number.b * number.d);
    int imaginary = (number.a * number.d) + (number.b * number.c);

    if (real == 0) cout << imaginary << "i" << endl;
    else if (imaginary == 0) cout << real << endl;
    else cout << real << " + " << imaginary << "i" << endl;
}


int main(){
    ComplexNumbers number;

    enterComplexNumber(number);

    addComplexNumbers(number);
    subtractComplexNumbers(number);
    multiplyComplexNumbers(number);

    return 0;
}
