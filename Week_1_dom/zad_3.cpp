#include <iostream>

using namespace std;

struct ComplexNumbers{
    int a, b ,c ,d;
};

void enterComplexNumber(ComplexNumbers &number){
    cin >> number.a >> number.b;
    cin >> number.c >> number.d;
}

bool checkImaginery(ComplexNumbers number){
    if (number.b == 0 && number.d == 0)
        return  false;
    else return  true;
}

void addComplexNumbers(ComplexNumbers number){
    int real = number.a + number.c;
    int imaginary = number.b + number.d;

    if (checkImaginery(number)) cout << real << " + " << imaginary << "i" << endl;
    else cout << real << endl;
}

void subtractComplexNumbers(ComplexNumbers number){
    int real = number.a - number.c; 
    int imaginary = number.b - number.d;

    if (checkImaginery(number)) cout << real << " + " << imaginary << "i" << endl;
    else cout << real << endl;
    
}

void multiplyComplexNumbers(ComplexNumbers number){
    int real = (number.a * number.c) - (number.b * number.d);
    int imaginary = (number.a * number.d) + (number.b * number.c);

    if (checkImaginery(number)) cout << real << " + " << imaginary << "i" << endl;
    else cout << real << endl;
    
}


int main(){
    ComplexNumbers number;

    enterComplexNumber(number);

    addComplexNumbers(number);

    subtractComplexNumbers(number);

    multiplyComplexNumbers(number);

    return 0;
}