#include<iostream>
#include "LinkedList.hh"
#include<vector>
using namespace std;

int main10() {

	vector2<int>vec;
	vec.add(12);
	vec.add(5);
	vec.add(45);// vector2<T2>::getRoot(){

	Node1<int>* currentNode = vec.getRoot();

	while (currentNode != nullptr) {
		cout << currentNode->val << endl;
		currentNode = currentNode->next;

	}


  return 0;
}