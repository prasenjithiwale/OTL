// OwnTemplateLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "linkedlist.h"

using namespace own;

int main()
{
	Node* head = nullptr;
	linkedlist::insert(head, 11);
	linkedlist::insert(head, 12);
	linkedlist::linkedlist_print(head);
	std::cout << "Length: " << linkedlist::length(head) << std::endl;
	std::cout << linkedlist::insert_after(head, 12, 13)->data<<std::endl;
	std::cout << std::endl;
	std::cout << linkedlist::insert_after(head, 13, 14)->data << std::endl;
	std::cout << std::endl;
	linkedlist::linkedlist_print(head);
	std::cout <<"Length: "<< linkedlist::length(head)<<std::endl;

	std::cout << "Found: " << linkedlist::search(head, 12)->data<<std::endl;
	linkedlist::remove(head, 11);
	std::cout << "Element removed!" << std::endl;
	linkedlist::linkedlist_print(head);

	std::cout << "updated: " << linkedlist::update(head, 13, 43)->data << std::endl;
	linkedlist::linkedlist_print(head);

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
