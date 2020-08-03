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
				head = newNode;
			}
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
		static int length(Node* &head) {
			int len = 0;
			Node* curr = head;
			do {
				len += 1;
				curr = curr->next;
			} while (curr != head);

			return len;
		}

		static Node* find(Node* &head, int data) {
			Node* curr = head;
			do {
				if (curr->data == data)
					return curr;
				curr = curr->next;
			} while (curr != head);

			return new Node(-1);
		}
	};
}

#endif // !_CIRCULARLINKEDLIST_H

