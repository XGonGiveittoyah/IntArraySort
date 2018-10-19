#include <iostream>
using namespace std;

void sort(int a[], int b[]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 9; j > -1; j--) {
			if (b[j] == 0 || a[i] < b[j]) {
				if (j == 9) {
					b[j] = a[i];
				}
				else {
					b[j + 1] = b[j];
					b[j] = a[i];
				}
			}
		}
	}
	// This loop checks if the value in the second array is zero, or if the value in the first array
	// is smaller than that of the second. If this is true, the value is switched.

	int k = 0;
	while (k < 10) {
		cout << b[k] << " ";
		k++;
	}
	cout << endl;
	return;
	// This loop prints the sorted array to the command prompt.
}
int main() {
	int to_be_sorted[] = { 8, 6, 10, 2, 16, 4, 18, 14, 12, 10 };
	int sorted[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; 
	// This block of code defines and initializes two arrays, one with random values, and one with zeroes.
	// The array of zeroes is to become the sorted version of the first.

	sort(to_be_sorted, sorted);
	// This calls a void function who's parameters are two arrays.

	system("pause");
	return 0;
}