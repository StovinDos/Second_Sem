#include <iostream>

using namespace std;

void binarySearchArr(int arr[], int N, int K){
    int left = 0;
    int right = N-1;
    int mid = (left+right)/2;

    while(left <= right){
        if(arr[mid] == K){
            cout << "Element found at index: " << mid << endl;
            return;
        } else if(arr[mid] < K){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
        mid = (left+right)/2;
    }
    cout << "Element not found." << endl;
}

void sortArr(int arr[], int N){
    for(int i = 0; i < N-1; i++){
        for(int j = 0; j < N-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    
    int N, K;

    cout << "Enter the number of elements in the array: ";
    cin >> N;

    int* arr = new int[N];
    
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    cout << "Enter the element you are searching for: ";
    cin >> K;

    sortArr(arr, N);
    binarySearchArr(arr, N, K);

}