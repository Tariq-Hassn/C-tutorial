#include<iostream>
using namespace std;

namespace in {

	class shape {
	public:shape(int whidth, int  higth) {
		cout << "shape 1 is creeted" << endl;

		this->higth = higth;
		this->whidth = whidth;
	}
		  shape(int width) {
			  this->whidth = width;
			  cout << "shape 2 is creeted" << endl;
		  }


	protected:
		int whidth, higth;
	};

	class rectangle :public shape {
	public:
		rectangle(int width, int higth) :shape(width, higth) {
			cout << "rectangle is creeted" << endl;
		}
		int area() {
			return this->higth * this->whidth;
		}
	};

	class Triangle :public shape {
	public:
		Triangle(int width, int higth) :shape(width, higth) {
			cout << "Triangle is creeted" << endl;
		}
		int area() {
			return this->higth * this->whidth / 2;
		}
	};
	class square :public shape {
	public:
		square(int width) :shape(width) {
			cout << "square is creeted" << endl;
		}
		int area() {
			return this->whidth * this->whidth;
		}
	};
}