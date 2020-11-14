#include <iostream>
#include "main.h"
#include "queue.h"
using namespace own;

void QUE() {
	Node* head = nullptr;
	std::cout << "Front : " << queue::Front(head) << std::endl;
	std::cout << "Rear : " << queue::Rear(head) << std::endl;
	std::cout << "Pushed : " << queue::Push(head,13) << std::endl;
	std::cout << "Pushed : " << queue::Push(head,12) << std::endl;
	std::cout << "Pushed : " << queue::Push(head,11) << std::endl;
	std::cout << "Front : " << queue::Front(head) << std::endl;
	std::cout << "Rear : " << queue::Rear(head) << std::endl;
	std::cout << "Popped : " << queue::Pop(head) << std::endl;
	std::cout << "Unique Push : " << queue::u_push(head, 112) << std::endl;
	std::cout << "Front : " << queue::Front(head) << std::endl;
	std::cout << "Rear : " << queue::Rear(head) << std::endl;
}