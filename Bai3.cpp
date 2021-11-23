#include<iostream>
#include"list.h"
using namespace std;
void swap(Node* &p, Node* &q){
	Node *tmp=p;
	p=q;
	q=tmp;
	delete tmp;
}
void BubbleSort(){
	SList list;
	Node* p = list.head;
	while (p != NULL) {
		Node *q = p->next;
		if(p->data > q->data)
			swap(p, q);
		p=p->next;
		delete q;
	}
	list.traverse();
	delete p;
}
int main(){
	SList list;
	list.addLast(5);
	list.addLast(2);
	list.addLast(3);
	list.addLast(7);
	list.addLast(1);
	
	cout<<"Mang da nhap: ";
	list.traverse();
	cout<<"Sap xep: ";
	BubbleSort();
}
