#include "main.h"
#include "circularlinkedlist.h"

using namespace own;

void CLL() {
	Node* head = nullptr;
	CLL::insert(head, 11);
	CLL::insert(head, 12);
	CLL::insert(head, 13);
	CLL::print(head);
	std::cout << "Length of CLL: " << CLL::length(head) << std::endl;
	std::cout << "Found data in CLL: " << CLL::find(head, 12)->data << std::endl;
}