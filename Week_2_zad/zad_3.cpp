#include <iostream>
#include <cmath>

using namespace std;

struct Array {

    int *arr;
    int size;   

    Array(int size) : size(size) {
        arr = new int[size];
    }

    ~Array() {
        delete[] arr;
    }

};