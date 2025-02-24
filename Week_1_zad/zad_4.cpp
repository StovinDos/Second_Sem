#include <iostream>

using namespace std;

int MAX_NUMBER = INT_MIN;
int LOW_NUMBER = INT_MAX;

void sum(int  arr[], int N);

int main() {

	int A; 
	cin >> A;
	int* arr = new int[A];
	

	for (size_t i = 0; i < A; i++){
		cin >> arr[i];
	}



	for (size_t i = 0; i < A; i++)
	{
		if (MAX_NUMBER < arr[i]){
			MAX_NUMBER = arr[i];
		}
		if (LOW_NUMBER > arr[i]){
			LOW_NUMBER = arr[i];
		}

	}


	cout <<"The lowest number: " << LOW_NUMBER << endl << "The highest number: " << MAX_NUMBER;
	cout << endl;
	sum(arr, A);

	delete[] arr;
	return 0;

}


void sum(int  arr[], int N){

	int sum = 0;
	int multi = 1;

	for (size_t i = 0; i < N; i++) {
		sum += arr[i];
		multi *= arr[i];
	}
	
	cout <<"The sum of all the numbers in the arr " << sum << endl << "The multi of all the numbers in the arr: " << multi;
}
