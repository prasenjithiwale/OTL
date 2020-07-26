#include <iostream>

#include "main.h"
#include "doublylinkedlist.h"

using namespace own;

void DLL() {
	Node* head = nullptr;
	DLL::insert(head, 11);
	DLL::insert(head, 12);
	DLL::insert(head, 13);
	DLL::search(head);
	std::cout << DLL::find(head, 12)->data;
}