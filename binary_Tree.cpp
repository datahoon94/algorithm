#include <iostream>

using namespace std;

int number=15;

class node {
public:
	int data;
	node* leftChild,*rightChild;
	node(int data) {
		this->data =data;
	}
	node() {};
};

void preorder(node* root) {
	if(root!=NULL) {
		cout << root->data << " ";
		preorder(root->leftChild);	
		preorder(root->rightChild);
	}
}

void inorder(node* root) {
	if(root) {
		inorder(root->leftChild);
		cout << root->data << " ";
		inorder(root->rightChild);
	}
}

void postorder(node* root) {
	if(root) {
		postorder(root->leftChild);
		postorder(root->rightChild);
		cout << root->data << " ";
	}
}

int main(void) {
    node nodes[number+1];
    
    for(int i=1;i<=number;++i) {
    	nodes[i]=i;
    	nodes[i].leftChild=NULL;
    	nodes[i].rightChild=NULL;
	}
	
	for(int i=2;i<=number;++i) {
		if(i%2==0) {
			nodes[i/2].leftChild = &nodes[i];
		}
		else nodes[i/2].rightChild = &nodes[i];
	}
	
	preorder(&nodes[1]);
	cout << "\n";
	inorder(&nodes[1]);
	cout << "\n";
	postorder(&nodes[1]);
    
    
	return 0;
}

