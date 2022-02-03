#include<iostream>
using namespace std;

int main6() {

	int number = 10;

	cout << "number= " << number << "\n&number= " << &number << endl;

	int* ptrnumber;
	ptrnumber = &number;

	cout << "ptrnumber=" << ptrnumber << "\t*ptrnumber=" << *ptrnumber << "\t & ptrnumber=" << &ptrnumber;

	int items[3] = { 5,10,15 };
	cout << "\nall array\n";
	for (int i = 0; i < 3; i++) {
		cout << "&items[" << i << "]=" << &items[i] << "\tvalue="
			<< items[i] << "\tsize of[" << i << "]=" << sizeof(items[i]) << endl;
	}
	int* ptritems = &items[0];
	cout << "\n&ptritems=" << ptritems << "\t*ptritems=" << *ptritems << endl;
	cout << "\n&ptritems=" << ptritems + 1 << "\t*ptritems=" << *(ptritems + 1) << endl;

	return 0;
}
