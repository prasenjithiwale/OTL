#include <iostream>

#include "main.h"
#include "doublylinkedlist.h"

using namespace own;

void DLL() {
	Node* head = nullptr;
	DLL::insert(head, 11);
	DLL::insert(head, 12);
	DLL::insert(head, 13);
	DLL::dll_print(head);
	DLL::insert_at(head, 12, 23);
	std::cout << "After inserting 23 on a location" << std::endl;
	DLL::dll_print(head);
	std::cout << DLL::find(head, 12)->data;
}