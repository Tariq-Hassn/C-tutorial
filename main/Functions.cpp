#include<iostream>
using namespace std;

double sum(double a, double b) {

	double result = a + b;

	return result;
}


double sum(double a, double b , double c) {

	double result = a + b + c;

	return result;
}

double sub(double a, double b) {

	double result = a - b;

	return result;
}

void print(int x, int y) {
	cout<<"x="<<x<<"\ty= "<<y<<endl;
}

auto addFunction(int z, int s) {
	int result = z + s;

	return result;
	 
}

int main7() {

	int r5 = addFunction(15, 40);
	cout << "r5=" << r5 << endl;
	double a = 12.5;
	double b = 13.5;
	double c = 10;

	double r1 = sum(a, b);
	cout << "r1=" << r1<< endl;

	double r2 = sub(a, b);
	cout << "r2=" << r2 << endl;

	double r3 = sum(a, b,c);
	cout << "r3=" << r3 << endl;

	print(a, b);

	return 0;
}