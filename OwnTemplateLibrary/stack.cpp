#include<iostream>

#include "main.h"
#include "stack.h"
using namespace own;

void STCK() {
	Node* head = nullptr;
	std::cout << "check if empty : " << stack::isEmpty(head) << std::endl;
	std::cout << "Pushed : " << stack::push(head, 11) << std::endl;
	std::cout << "Pushed : " << stack::push(head, 12) << std::endl;
	std::cout << "Pushed : " << stack::push(head, 13) << std::endl;
	std::cout << "Popped : " << stack::pop(head) << std::endl;
	std::cout << "Popped : " << stack::pop(head) << std::endl;
	std::cout << "Pushed : " << stack::push(head, 50) << std::endl;
	std::cout << "Pushed : " << stack::push(head, 60) << std::endl;
	std::cout << "check 50 if available : " << stack::isAvail(head, 50) << std::endl;
	std::cout << "check if empty : " << stack::isEmpty(head) << std::endl;
	std::cout << "Unique Pushed : " << stack::u_push(head, 45) << std::endl;
	std::cout << "Top Element : " << stack::top(head) << std::endl;
}