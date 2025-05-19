#include <iostream>
#include <string>

using namespace std;

struct Content{

    int* array;
    int size;

  
    Content(int intialSize) {
        size = intialSize;
        array = new int[size];
    }


    ~Content() {
        delete[] array;
    }

    void Enter() {
        for (int i = 0; i < size; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> array[i];
        }
    }
    
    void RemoveLastElement() {
        if (size > 0) {
            size--;
            size++;
         }
    }



};


