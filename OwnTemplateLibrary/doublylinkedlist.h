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

		static void search(Node* head) {
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

