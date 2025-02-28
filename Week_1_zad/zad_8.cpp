#include <iostream>

using namespace std;

bool checkEmpty(int size){
        if (size == 0){
            return true;
        }
    return false;
}

int addLast(int* arr, int size, int element){
    arr[size] = element;
    return size + 1;
}

int removeLast(int* arr, int size){
    int temp = arr[size- 1  ];
    arr[size] = temp;
    return size - 1;
}

int main(){


    int arrSize;
    cin >> arrSize;
    int *arr = new int[arrSize];

    if (checkEmpty(arrSize)){
        cout << "The array is empty." << endl;
        return 1;
    } else cout << "The array is not empty." << endl;
    
    for (size_t i = 0; i < arrSize; i++){
        cin >> arr[i];
    }

    for (size_t i = 0; i < arrSize; i++){
        cout << arr[i] << " ";
    }
    
    cout << "Enter the element you want to add last: ";
    int element;
    cin >> element; 

    addLast(arr, arrSize, element);
    for (size_t i = 0; i < arrSize + 1; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "Remove the last element: ";
    removeLast(arr, arrSize);
    for (size_t i = 0; i < arrSize; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}