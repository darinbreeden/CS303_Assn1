#include "Functions.h"

int main() {
	int * arr = new int[100];
	ifstream inFile;
	inFile.open("A1input.txt");
	if (!inFile.is_open()) {
		cout << "File is not open" << endl;
	}
	int num;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		inFile >> num;
		arr[i] = num;
	}

	cout << "done";
}
