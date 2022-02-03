#include<iostream>
using namespace std;
#include"Rectangl.h"

Rectangl::Rectangl() {
	cout << "Rectangl is crated\n";
}
Rectangl::~Rectangl() {
	cout << "Rectangl is die\n";
}
int main99() {
	{
Rectangl rect1;
rect1.setVals(20, 10);
	int result = rect1.area();
	cout << "result=" << result << endl;
	cout << "width=" << rect1.width << "\tlength=" << rect1.length << endl;


	Rectangl rect2;
	rect2.setVals(15, 5);
	int result2 = rect2.area();
	cout << "result2=" << result2 << endl;
	cout << "width=" << rect2.width << "\tlength=" << rect2.length << endl;
     }

	return 0;
}