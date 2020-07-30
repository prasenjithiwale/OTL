#include "main.h"
#include "circularlinkedlist.h"

using namespace own;

void CLL() {
	Node* head = nullptr;
	CLL::insert(head, 11);
	CLL::insert(head, 12);
	CLL::print(head);
}