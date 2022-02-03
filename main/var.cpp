#include<iostream>
using namespace std;


   int main2() {

	long x = 200;
	cout << x << endl;
	cout << sizeof(x) << endl;
	cout<< &x << endl;
	

	int a(2);
	auto b = 3.5;
	decltype(b) d { 4 };

	auto resulit = (a + b + d);

	cout << resulit <<endl<<typeid(resulit).name()<< endl;

	int date = 0xab1;
	cout <<std::hex <<date << endl;

	 date = 0b0101;
	cout << date << endl;

	long long testNumber = 15ull;
	char32_t test = 'tar';
	cout << test<<"\n" << sizeof(test) << endl;
	
	cout << "Enter number";
	int number;
	cin >> number;
	cout << "you Enter: " << number;
	return 0;
}