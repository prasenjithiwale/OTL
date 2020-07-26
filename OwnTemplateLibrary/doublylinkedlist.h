#pragma once

#ifndef _DOUBLYLINKEDLIST_H
#define _DOUBLYLINKEDLIST_H

#include<iostream>

namespace own {

	class Node {
	public:
		int data;
		Node* next;
		Node* prev;
		Node(int d) : data{ d }, next{ nullptr }, prev{ nullptr } {}
	};

	class DLL {
	public:
		static void insert(Node* &head, int data) {
			Node* newNode = new Node(data);
			if (head == nullptr) {
				head = newNode;
			}
			else {
				Node* curr = head;
				while (curr->next != nullptr) {
					curr = curr->next;
				}
				newNode->prev = curr;
				curr->next = newNode;
			}
		}

		static void search(Node* head) {
			Node* curr = head;
			while (curr) {
				if (curr->next == nullptr && curr->prev == nullptr) {
					std::cout << "current: " << curr->data << std::endl;
				}
				else {
					std::cout << " current: " << curr->data << std::endl;
					if (curr->prev != nullptr) {
						std::cout << "Prev of "<<curr->data << " is " << curr->prev->data << std::endl;
					}
					else {
						std::cout << "Prev not available" << std::endl;
					}
				}
				curr = curr->next;
			}
		}
	};
}

#endif // !_DOUBLYLINKEDLIST_H

