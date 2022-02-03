#include<iostream>
using namespace std;
#define SIZE 6
int main5() {
	//one Dimension array
	//char numbers[SIZE]{ 'a','s','e','r','d','\0'};

	//for (int i = 0; i < SIZE; i++) {
	//	cout <<i<< "Enter number : ";
	//	cin >> numbers[i];

	//}
	//for (int i = 0; i < SIZE; i++) {
	//	cout <<"Array ["<<i<<"]="<< numbers[i] << endl;
	//}

	// two Dimension array
	int arr[3][3];// = { {10,20,30},{5,10,15},{50,200,450} };

	cout << "print all array\n";
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			cout << "Enter numbers[" << r << "][" << c << "]=";
			cin >> arr[r][c];
		}
		cout << endl;
	}

	cout << "print all array\n";
	for (int r=0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			cout << arr[r][c] << "\t";
		}
		cout << endl;
	}

	cout << "\nmain Dig\n";
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			if (r == c) {
				cout << arr[r][c] << "\t";
			}
		}
		cout << endl;
	}

	cout << "\n under Dig\n";
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			if (r > c) {
				cout << arr[r][c] << "\t";
			}
		}
		cout << endl;
	}

	cout << "\n Above Dig\n";
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			if (r < c) {
				cout << arr[r][c] << "\t";
			}
		}
		cout << endl;
	}

	return 0;
}