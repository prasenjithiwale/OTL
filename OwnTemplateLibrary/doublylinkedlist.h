//Author: Prasenjit Hiwale
//Date: 07/26/2020

//CRUD DoublyLinkedList


/*
This library is all about singly linked list. Here you can find following functions;
	1. Insert a new node in doublylinkedlist.
	2. Search a node.
	3. Insert a new node at random position.
	4. Find the length of the linkedlist.
	5. Delete a random node.
	6. Update a random node.
*/


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

		static void dll_print(Node* head) {
			Node* curr = head;
			while (curr) {
				if (curr->next == nullptr && curr->prev == nullptr) {
					std::cout << "current: " << curr->data << std::endl;
				}
				else {
					std::cout << " current: " << curr->data << std::endl;
					/*
					if (curr->prev != nullptr) {
						std::cout << "Prev of "<<curr->data << " is " << curr->prev->data << std::endl;
					}
					else {
						std::cout << "Prev not available" << std::endl;
					}*/
				}
				curr = curr->next;
			}
		}

		static void insert_at(Node* &head, int after, int data) {
			Node* curr = head;
			Node* newNode = new Node(data);
			while (curr) {
				if (head == nullptr) {
					return;
				}
				else if (curr->data == after) {
					if (curr->next != nullptr) {
						newNode->prev = curr;
						newNode->next = curr->next;
						curr->next->prev = newNode;
						curr->next = newNode;
						return;
					}
					else if (curr->next == nullptr) {
						curr->next = newNode;
						newNode->prev = curr;
						return;
					}
				}
				curr = curr->next;
			}
		}

		static int length(Node* head) {
			int len = 0;
			Node* curr = head;
			while (curr) {
				len++;
				curr = curr->next;
			}
			return len;
		}

		static Node* find(Node* head, int data) {
			Node* curr = head;
			while (head) {
				if (curr->data == data) {
					return curr;
				}
				else{
					curr = curr->next;
				}
			}
			return head;
		}

	};
}

#endif // !_DOUBLYLINKEDLIST_H

