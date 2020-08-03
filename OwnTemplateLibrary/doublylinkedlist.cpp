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
	std::cout << DLL::find(head, 12)->data << std::endl;
	//DLL::dll_delete(head, 11);
	//DLL::dll_print(head);
	std::cout << "Length of Doubly Linked List: " << DLL::length(head) << std::endl;
	std::cout << "Updated : " << DLL::dll_update(head, 11, 22)->data << std::endl;
	DLL::dll_print(head);
}