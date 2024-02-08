#include "Functions.h"
using namespace std;

int numExist(int* arr[], int num) {
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (*arr[i] == num) {
			return i;
		}
	}
	cout << "\nInteger not in array.\n";
	return -1;
}

int numMod(int* arr[], int index, int num) {
	for (int i = 0; i < sizeof(*arr) / sizeof(int); i++) {
		if (arr[i] == arr[index]) {
			int old = *arr[i];
			*arr[i] = num;
			return old, *arr[i];
		}
	}
	cout << "\nInteger not in array.\n";
	return -1;
}

int* numAdd(int * arr[], int num) {
	int * arrNew[(sizeof(arr) / sizeof(int)) + 1];
	for (int i = 0; i < sizeof(*arr) / sizeof(int); i++) 
		arrNew[i] = arr[i];
	*arrNew[(sizeof(arr) / sizeof(int))] = num;
	delete[] arr;
	arr = arrNew;
	return *arr;
}

int* numReplace(int* arr[], int num, bool remove) {
	if (remove == true) {
		arr[num] = 0;
		return *arr;
	}
	else {
		int *arrNew = *arr;
		for (int i = 0; i < sizeof(*arr) / sizeof(int); i++) {
			arrNew[i] = *arr[i];
		}
		delete[] arr;
		*arr = arrNew;
		return *arr;
	}
}
