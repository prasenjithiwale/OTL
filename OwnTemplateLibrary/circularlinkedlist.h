#pragma once

#ifndef _CIRCULARLINKEDLIST_H
#define _CIRCULARLINKEDLIST_H

#include<iostream>

namespace own {
	class Node {
	public:
		int data;
		Node* next;
		Node(int d): data{ d }, next{ nullptr } {}
	};

	class CLL {
	public:
		static void insert(Node* &head, int data) {
			Node* curr = head;
			Node* newNode = new Node(data);
			newNode->next = head;
			if (head != nullptr) {
				while (curr->next != head) {
					curr = curr->next;
				}
				curr->next = newNode;
			}
			else {
				newNode->next = newNode;
			}
			head = newNode;
			/*if (head == nullptr) {
				head = newNode;
				return;
			}
			while (head) {
				if (curr->next == head) {
					newNode->next = head;
					curr->next = newNode;
					return;
				}
			}*/
		}
		static void print(Node* &head) {
			Node* curr = head;
			if(head != nullptr){
				do {
					std::cout << curr->data << std::endl;
					curr = curr->next;
				} while (curr != head);
			}
		}
	};
}

#endif // !_CIRCULARLINKEDLIST_H

