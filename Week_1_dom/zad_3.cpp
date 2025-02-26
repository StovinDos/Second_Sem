#include <iostream>

using namespace std;

struct ComplexNumbers{
    int a, b ,c ,d;
};

void enterComplexNumber(ComplexNumbers &number){
    cin >> number.a >> number.b;
    cin >> number.c >> number.d;
}

void addComplexNumbers(ComplexNumbers number){
    int real = number.a + number.c;
    int imaginary = number.b + number.d;

    cout << real << " + " << imaginary << "i" << endl;
}

void subtractComplexNumbers(ComplexNumbers number){
    int real = number.a - number.c; 
    int imaginary = number.b - number.d;

    cout << real << " + " << imaginary << "i" << endl;
}

void multiplyComplexNumbers(ComplexNumbers number){
    int real = (number.a * number.c) - (number.b * number.d);
    int imaginary = (number.a * number.d) + (number.b * number.c);

    cout << real << " + " << imaginary << "i" << endl;
}


int main(){
    ComplexNumbers number;

    enterComplexNumber(number);

    addComplexNumbers(number);

    subtractComplexNumbers(number);

    multiplyComplexNumbers(number);

    return 0;
}