#include<iostream>
#include<assert.h>
using namespace std;

const int MAX_SIZE = 1000;

int findBiggestElementInArray(int array[], int n) {
	assert(n > 1);
	int biggestElement = array[0];
	for (int i = 1; i < n; i++) {
		if (array[i] > biggestElement) {
			biggestElement = array[i];
		}
	}
	return biggestElement;
}

int findSmallestElementInArray(int array[], int n) {
	assert(n > 1);
	int smallestElement = array[0];
	for (int i = 1; i < n; i++) {
		if (array[i] < smallestElement) {
			smallestElement = array[i];
		}
	}
	return smallestElement;
}

void createArray(int array[], int size) {
	cout << "Enter array elements\n";
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
}

void printArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
		if (i == size - 1) {
			cout << endl;
		}
	}
}

void countingSort(int array[], int size) {
	int tempArray[MAX_SIZE] = { 0 };
	int smallestElement = findSmallestElementInArray(
		array, size);
	int biggestElement = findBiggestElementInArray(
		array, size);
	for (int i = 0; i < size; i++) {
		int index = array[i] - smallestElement;
		tempArray[index]++;
	}

	// put the elements in the array in order
	int j = 0;
	for (int i = 0; i <= biggestElement - smallestElement; i++) { //the actual size of the temporary array is (biggest - smallest)
		if (tempArray[i]) {
			for (int k = 0; k < tempArray[i]; k++) {
				array[j++] = i + smallestElement;
			}
		}
	}
}
int main() {
	//int arrayToSort[MAX_SIZE]={1,23,543,0,4} => array with 4 elems
	int arrayToSort[MAX_SIZE];
	int arraySize;

	cout << "Enter array size: " << endl;
	cin >> arraySize;
	createArray(arrayToSort, arraySize);

	countingSort(arrayToSort, arraySize);
	cout << "Sorted array:\n";
	printArray(arrayToSort, arraySize);

}