#include <iostream>
#include "linkedlist.h"

using namespace own;

void LL() {
	Node* head = nullptr;
	linkedlist::insert(head, 11);
	linkedlist::insert(head, 12);
	linkedlist::linkedlist_print(head);
	std::cout << "Length: " << linkedlist::length(head) << std::endl;
	std::cout << linkedlist::insert_after(head, 12, 13)->data << std::endl;
	std::cout << std::endl;
	std::cout << linkedlist::insert_after(head, 13, 14)->data << std::endl;
	std::cout << std::endl;
	linkedlist::linkedlist_print(head);
	std::cout << "Length: " << linkedlist::length(head) << std::endl;

	std::cout << "Found: " << linkedlist::search(head, 12)->data << std::endl;
	linkedlist::remove(head, 11);
	std::cout << "Element removed!" << std::endl;
	linkedlist::linkedlist_print(head);

	std::cout << "updated: " << linkedlist::update(head, 13, 43)->data << std::endl;
	linkedlist::linkedlist_print(head);
}