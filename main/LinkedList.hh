
template<class T>

struct Node1 {
	T val;
	Node1* next;
};

template  <class T2>
class vector2 {
public:
  void add(T2 value);
	~vector2(T2);
	template<class T2>
	Node1<T2>* getRoot();
		
private:
	Node1<T2>* root = nullptr;
};


template<class T2>
void vector2<T2>::add(T2 value) {
	Node1<T2>* newnode = new Node1<T2>();
	newnode->val = value;

	if (root == nullptr) {
		newnode->next = nullptr;
		root = newnode;
		return;
	}
	newnode->next = root;
	root = newnode;
}
template<class T2>
vector2<T2>::vector2<T2>() {

}
template<class T2>
Node1<T2>*getRoot(){

	return root;
}