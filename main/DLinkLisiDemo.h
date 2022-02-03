#include<iostream>
namespace ds {
	template <class E>
	struct Dnode {
		E val;
		Dnode* left;
		Dnode* right;
		Dnode(E date) {
			val = date;
			left = nullptr;
			right = nullptr;
		}
	};
	template<class E2>
	class DLinkedList {
	public:
		~DLinkedList();
		void addFront(E2 value);
		void addRear(E2 value);
		Dnode<E2>* getRear();
		Dnode<E2>* getFront();
	private:
		Dnode <E2>* front = nullptr;
		Dnode <E2>* rear = nullptr;
	};
	template<class E2>
	DLinkedList<E2>::~DLinkedList() {
		while (rear != nullptr) {
			Dnode<E2>* temp = rear;
			rear = rear->right;
			if (rear != nullptr)
				rear->left = nullptr;
			std::cout << "delete:" << temp->val << std::endl;
			delete temp;
			//temp = rear;
		}
	}
	template<class E2>
	void DLinkedList<E2>::addFront(E2 value) {
		Dnode<E2>* newnode = new Dnode<E2>(value);
		if (rear == nullptr && front == nullptr) {
			rear = newnode;
			front = newnode;
			return;
		}
		newnode->left = front;
		front->right = newnode;
		front = newnode;
	}
	template<class E2>
	void DLinkedList<E2>::addRear(E2 value) {
		Dnode<E2>* newnode = new Dnode<E2>(value);
		if (rear == nullptr && front == nullptr) {
			rear = newnode;
			front = newnode;
			return;
		}
		newnode->right = rear;
		rear->left = newnode;
		rear = newnode;
	}
	template<class E2>
	Dnode<E2>* DLinkedList<E2>::getRear() {
		return rear;
	}
	template<class E2>
	Dnode<E2>* DLinkedList<E2>::getFront() {
		return front;
	}
}