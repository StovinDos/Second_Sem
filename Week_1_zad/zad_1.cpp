#include <iostream>

using namespace std;

void sum(int temp[100], int count);

int main() {
	int N;
	int temp[100];
    int count = 0;

	cout << "Enter the number: ", cin >> N;

	for (size_t i = 1; i < N; i++){
		
		if (i % 7 == 0 || i % 3 == 0 || i % 5 == 0){

			temp[count] = i;
			count++;
		}

	}

	sum(temp, count);
	cout << endl;

	for (size_t i = 0; i < count; i++){

		cout << temp[i] << " ";

	}

	return 0;
}

void sum(int temp[100],int count) {

	int sum = 0;

	for (size_t i = 0; i < count; i++){

		sum += temp[i];

	}

	cout << sum;

}
