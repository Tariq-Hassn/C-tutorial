#include<iostream>
#include "Rectangl.h"
using namespace std;

int main111() {}
	
	int Rectangl::area() {
		int area = this->length * this->width;
		return area;
	}

	void Rectangl::setVals(int length, int width) {
		this->length = length;
		this->width = width;
	}
