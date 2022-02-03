#include<iostream>
using namespace std;
#include"DLinkLisiDemo.h"

int main() {

	ds::DLinkedList < int>dLinkedList;
	dLinkedList.addFront(12);
	dLinkedList.addFront(333);
	dLinkedList.addFront(22);
	dLinkedList.addRear(12);
	dLinkedList.addFront(132);

	ds::Dnode<int>* temp = dLinkedList.getRear();

		while (temp != nullptr) {
			cout << temp->val << endl;
			temp = temp->right;

		}
		return 0;
	
}