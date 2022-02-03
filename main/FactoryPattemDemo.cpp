#include<iostream>
using namespace std;
#include"shapes.h"
using namespace in;
#include "Rectangl.h"


enum class shapeDraw { rectangle=1, Triangle=2,square=3 };


class shapesfactory {
public:
	shape* getshape(shapeDraw shapeDraw, int width, int height) {

		shape* shape = nullptr;

			switch (shapeDraw) {
			case shapeDraw::rectangle:
				shape = new rectangle(width, height);
				break;
			case shapeDraw::Triangle:
				shape = new Triangle(width, height);
				break;
			case shapeDraw::square:
				shape = new square(width);
				break;
			default:
				shape = nullptr;
				break;
			}
			return shape;
	}

};

int main12() {


	shapesfactory shapesfactory;
	int drawIndex = 0;
	do {
		cout << "Enter 1 for rectangle\n 2 for Triangle \n 3 for square\n 0 for exit  ";
		cin >> drawIndex;
		shape* shape = shapesfactory.getshape((shapeDraw)drawIndex, 10, 20);
		cout << shape->area() << endl;
		
		delete shape;

	} while (drawIndex != 0);


	return 0;
}