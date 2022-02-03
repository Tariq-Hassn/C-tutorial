#include<iostream>
using namespace std;
#include"shapes.h"
using namespace in;

	int main11() {

		in::rectangle r(10, 20);
		cout << "rectangle area=" << r.area() << endl;

		in::Triangle t(10, 20);
		cout << "Triangle area=" << t.area() << endl;

		in::square s(10);
		cout << "square area=" << s.area() << endl;


		return 0;
	}
