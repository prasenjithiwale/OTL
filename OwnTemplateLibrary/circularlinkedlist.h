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
			if (head == nullptr) {
				curr = newNode;
				curr->next = head;
				std::cout << curr->data;
				return;
			}
			while (head) {
				if (curr->next == head) {
					newNode->next = head;
					curr->next = newNode;
					return;
				}
			}
		}
		static void print(Node* &head) {
			Node* curr = head;
			do{
				std::cout << curr->data << std::endl;
				curr = curr->next;
			} while (curr->next != head);
		}
	};
}

#endif // !_CIRCULARLINKEDLIST_H

