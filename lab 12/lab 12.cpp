#include <iostream> 
using namespace std;

int* createDivisorsArray(int n, int& size) {
	size = 0;
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			++size;
		}
	}

	int* divisors = new int[size];

	int count = 0;
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			divisors[count] = i;
			++count;
		}
	}

	return divisors;
}

void reverseArray(int arr[], int size) {
	for (int i = 0; i < size / 2; ++i) {
		int temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}

int main() {
	int n;
	cout << "Enter an integer: ";
	cin >> n;

	int size;
	int* divisors = createDivisorsArray(n, size);

	cout << "Divisors array of " << n << ": ";
	for (int i = 0; i < size; ++i) {
		cout << divisors[i] << " ";
	}
	cout << endl;

	reverseArray(divisors, size);

	cout << "Reversed divisors array: ";
	for (int i = 0; i < size; ++i) {
		cout << divisors[i] << " ";
	}
	cout << endl;

	return 0;
}
