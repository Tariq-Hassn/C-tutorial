#include<iostream>
using namespace std;

struct Node{
    int val;
    struct Node* left;
    struct Node* right;

    Node(int data) {
        val = data;
        left = nullptr;
        right = nullptr;
    }
};
struct Node* root = nullptr;
void  addNodeTotree(struct Node* startNode, struct Node* newNode) {
    if (root == nullptr) {
        root = newNode;
        return;
    }
    if (newNode->val < startNode->val) {
        //add to right side of tree
        if (startNode->left == nullptr) {
            startNode->left = newNode;
            return;
        }
        addNodeTotree(startNode->left, newNode);
    }
    if (newNode->val > startNode->val) {
        //add to left side of tree
        if (startNode->right == nullptr) {
            startNode->right = newNode;
            return;
        }
        addNodeTotree(startNode->right, newNode);
    }
}
void printTree(struct Node* node) {
    if (node == nullptr) {
        return;
    }
    printTree(node->left);
    cout << node->val << "\t";
    printTree(node->right);
}
void clearTree(struct Node* node) {
    if (node == nullptr) {
        return;
    }
    clearTree(node->left);
    clearTree(node->right);
    cout <<"delete:"<< node->val <<endl;
    delete node;
}

void buildfromTreeArray(int* arrayofvaluse, int size ) {
    cout << "\nbuildfromTreeArray\n";

    for (int i = 0; i < size; i++) {
        addNodeTotree(root, new Node(arrayofvaluse[i]));
    }
}
          
int main8() {
    buildfromTreeArray(new int[] {5, 3, 2, 4, 9, 7, 10}, 7);
    cout << "\nprint All\n";
    printTree(root);

    cout << "\nClear All\n";
    clearTree(root);
    return 0;
}