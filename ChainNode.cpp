#include <iostream>

using namespace std;

class ChainNode{
	public : 
	int data;
	ChainNode *link;
};
int main(){
	ChainNode *A = new ChainNode;
	A -> data = 4;
	A -> link = 0;
	
	ChainNode *B = new ChainNode;
	B -> data = 5;
	B -> link = 0;
	A -> link = B;
	cout<<A->data<<endl;
	
	ChainNode *C = new ChainNode;
	C -> data = 6;
	C -> link = 0;
	A -> link -> link = C;
	cout<<A->data<<endl;
	
	ChainNode *D = new ChainNode;
	D -> data = 3;
	D -> link = 0;
	D -> link = A;
	cout<<D->data<<endl;
	A=D;
	cout<<A->data<<endl;
	
	ChainNode *E = new ChainNode;
	E -> data = 2;
	E -> link = 0;
	E -> link = A;
	cout<<E->data<<endl;
	A=E;
	cout<<A->data<<endl;
	
}

