#include <iostream>
using namespace std;

int main4() {
	

	int number;
	int i = 0;
	while (i <= 10) {
		number = i;
		cout << i << " - Enter number : ";

		cin >> number;

		if (number %2 == 0) {
			cout << "number is even" << endl;
		}
		else if (number % 2==1) {
			cout << "number is odd" << endl;
		}

		i++;
	} 
	return 0;
}